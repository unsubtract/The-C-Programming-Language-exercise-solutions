#include <stdio.h>
#include <stdlib.h>

/* Generate a histogram of word lengths from input */
#define MAX_WORD_LENGTH 100

int main(void)
{
    int c = 0;
    int wl[MAX_WORD_LENGTH] = {0};
    int cwl = 0;

    while (c = getchar()) {
        if (c == ' ' || c == '\t' || c == EOF) {
            ++wl[cwl];
            cwl = 0;
        }
        else ++cwl;
        if (c == EOF) break;
    }


    puts("\nlen");
    for (unsigned i = 1; i < MAX_WORD_LENGTH; ++i) {
        if (wl[i] > 0) {
            printf("%3i ", i);
            for (unsigned j = wl[i]; j > 0; --j) putchar('#');
            putchar('\n');
        }
    }
    
    return EXIT_SUCCESS;
}
