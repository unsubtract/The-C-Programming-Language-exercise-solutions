#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define RANGE(i, prev)\
    while (i > prev) {\
        prev = i;\
        ++i;\
    }

/* get the ranges of int types via both manual computation and limits.h */
int main(void)
{
    int imin = 1, imax = 0;
    RANGE(imin, imax);
    printf("signed int: %i to %i (%i to %i)\n", imin, imax, INT_MIN, INT_MAX);
    unsigned umin = 1, umax = 0;
    RANGE(umin, umax);
    printf("unsigned int: %u to %u (0 to %u)\n", umin, umax, UINT_MAX);

    signed char scmin = 1, scmax = 0;
    RANGE(scmin, scmax);
    printf("signed char: %i to %i (%i to %i)\n", scmin, scmax, SCHAR_MIN, SCHAR_MAX);
    unsigned char ucmin = 1, ucmax = 0;
    RANGE(ucmin, ucmax);
    printf("unsigned char: %u to %u (0 to %u)\n", ucmin, ucmax, UCHAR_MAX);

    short smin = 1, smax = 0;
    RANGE(smin, smax);
    printf("signed short: %hi to %hi (%i to %i)\n", smin, smax, SHRT_MIN, SHRT_MAX);
    unsigned short usmin = 1, usmax = 0;
    RANGE(usmin, usmax);
    printf("unsigned short: %hu to %hu (0 to %u)\n", usmin, usmax, USHRT_MAX);

    /* too big and slow
    long lmin = 1, lmax = 0;
    RANGE(lmin, lmax);
    printf("signed long: %li to %li (%li to %li)\n", lmin, lmax, LONG_MIN, LONG_MAX);
    unsigned long ulmin = 1, ulmax = 0;
    RANGE(ulmin, ulmax);
    printf("unsigned long: %lu to %lu (0 to %ul)\n", ulmin, ulmax, ULONG_MAX); */

    return EXIT_SUCCESS;
}
