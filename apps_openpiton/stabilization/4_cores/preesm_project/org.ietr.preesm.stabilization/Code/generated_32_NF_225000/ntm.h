#ifndef __NTM_HH__
#define __NTM_HH__


#include <emmintrin.h>
#include <smmintrin.h>

#define MM32

static inline void ntmcpy(void *a, void *b, size_t size){
	size_t i;

#ifdef MM32
	for (i = 0; i < size/4; i++) {
		const int *ptr = (int *)&b[i * 4];
		_mm_stream_si32((int *)&a[i * 4], *ptr);
	}
#elif MM128
	for (i = 0; i < size/16; i++) {
		const __m128i *ptr = (__m128i *)&b[i * 16];
		_mm_stream_si128((__m128i *)&a[i * 16], _mm_stream_load_si128(ptr));
	}
#else
#error "fail"
#endif
}

#endif