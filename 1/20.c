#include <stdio.h>
#include <stdlib.h>

/* replace input tabs with enough spaces to reach the next tabstop */
#define TABSTOP 8

int main(void)
{
    int count = 0, c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            c = count;
            for (unsigned i = 0; i < TABSTOP - (c % TABSTOP); ++i) {
                putchar(' ');
                ++count;
            }
        }
        else if (c == '\n') {
            putchar(c);
            count = 0;
        }

        else {
            putchar(c);
            ++count;
        }
    }

    return EXIT_SUCCESS;
}
