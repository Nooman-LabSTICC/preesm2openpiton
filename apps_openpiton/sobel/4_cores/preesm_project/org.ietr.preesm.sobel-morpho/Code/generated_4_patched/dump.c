/**
 * Copyright or © or Copr. IETR/INSA - Rennes (2017 - 2018) :
 *
 * Antoine Morvan <antoine.morvan@insa-rennes.fr> (2017 - 2018)
 * Julien Hascoet <jhascoet@kalray.eu> (2017)
 *
 * This software is a computer program whose purpose is to help prototyping
 * parallel applications using dataflow formalism.
 *
 * This software is governed by the CeCILL  license under French law and
 * abiding by the rules of distribution of free software.  You can  use,
 * modify and/ or redistribute the software under the terms of the CeCILL
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * "http://www.cecill.info".
 *
 * As a counterpart to the access to the source code and  rights to copy,
 * modify and redistribute granted by the license, users are provided only
 * with a limited warranty  and the software's author,  the holder of the
 * economic rights,  and the successive licensors  have only  limited
 * liability.
 *
 * In this respect, the user's attention is drawn to the risks associated
 * with loading,  using,  modifying and/or developing or reproducing the
 * software by the user in light of its specific status of free software,
 * that may mean  that it is complicated to manipulate,  and  that  also
 * therefore means  that it is reserved for developers  and  experienced
 * professionals having in-depth computer knowledge. Users are therefore
 * encouraged to load and test the software's suitability as regards their
 * requirements in conditions enabling the security of their systems and/or
 * data to be ensured and,  more generally, to use and operate it in the
 * same conditions as regards security.
 *
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL license and that you accept its terms.
 */
/*
	============================================================================
	Name        : dump.c
	Author      : kdesnos
	Version     : 1.0
	Copyright   : CECILL-C
	Description : Function called by code generated by the Instrumented C
                  Printer of Preesm
	============================================================================
*/

#include "dump.h"

static FILE *ptfile;
static int *bckupNbExec;

void dumpTime(int id,uint64_t* dumpBuffer){
    dumpBuffer[id] = clock();
}

void initNbExec(int* nbExec, int nbDump){
    int i = 0;

	bckupNbExec = malloc(nbDump*sizeof(int));
	memset(bckupNbExec,0,nbDump*sizeof(int));

    if((ptfile = fopen(DUMP_FILE, "a+")) == NULL )
    {
        fprintf(stderr,"ERROR: Cannot open dump file '%s'\n", DUMP_FILE);
        exit(1);
    }

    // Go to the end:
    fseek (ptfile , 0 , SEEK_END);

    //printf(";;");
    for(i=1; i<nbDump; i++){
        *(nbExec+i) = 1;
        fprintf(ptfile,"%d;",i);
    }
    fprintf(ptfile,"\n");
    fflush(ptfile);
}

void writeTime(uint64_t* dumpBuffer, int nbDump, int* nbExec){
    static int stable = 0;
    int i ;
    int changed = 0;
	int nbNotReady = 0;

    if(stable != 0) {
        printf("--\n");
        for(i=1;i< nbDump;i++){
            float nbEx = (float)*(nbExec+i);
            float res;
            nbEx = (nbEx != 0)? 1/nbEx : 0;
            res = ((float)dumpBuffer[i]-(float)dumpBuffer[i-1]) * nbEx;
            fprintf(ptfile,"%.2f;",res*CLOCKS_PER_SEC );
        }
        fprintf(ptfile,"\n");
        fflush(ptfile);
    } else {
        for(i=nbDump-1;i>=0;i--){
            int nbExecBefore;

            dumpBuffer[i] = dumpBuffer[i]-dumpBuffer[i-1];
            // We consider that all measures below 5 ms are not precise enough
            nbExecBefore = *(nbExec+i);
            if(dumpBuffer[i] < 10*1000/CLOCKS_PER_SEC) {
                *(nbExec+i) = ceil(*(nbExec+i) * 1.5);
                if(*(nbExec+i) > 131072) {
                    *(nbExec+i) = 131072;
                }
            }
            if(dumpBuffer[i] < 0){
                *(nbExec+i) = 0;
            }
            if(nbExecBefore != *(nbExec+i)){
                changed |= 1;
				nbNotReady++;

			} else {
				if(*(nbExec+i)!=0){
				bckupNbExec[i] = *(nbExec+i);
				*(nbExec+i) = 0;
				}
			}
        }
		//printf("Ready: %d/%d\n",nbDump-nbNotReady,nbDump);
        if(changed == 0) {
            stable = 1;
			memcpy(nbExec,bckupNbExec,nbDump*sizeof(int));
			free(bckupNbExec);
            for(i=1;i<nbDump;i++){
                fprintf(ptfile,"%d;",*(nbExec+i));
            }
            fprintf(ptfile,"\n");
            fflush(ptfile);
        }
    }
}
