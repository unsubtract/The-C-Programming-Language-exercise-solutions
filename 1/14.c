#include <stdio.h>
#include <stdlib.h>

/* Generate a histogram of characters from input */
#define CHARACTERS (255 - 32) /* printable ASCII */

int main(void)
{
    int c = 0;
    int chars[CHARACTERS] = {0};

    while ((c = getchar()) != EOF) {
        if (c > 32) chars[c - 32] += 1;
    }

    puts("\nchar");
    for (unsigned i = 0; i < CHARACTERS; ++i) {
        if (chars[i] > 0) {
            printf("   %c ", i + 32);
            for (unsigned j = chars[i]; j > 0; --j) putchar('#');
            putchar('\n');
        }
    }
    
    return EXIT_SUCCESS;
}
