#include <stdio.h>
#include <stdlib.h>

/* Copy input to output,
 * replacing sequences of several spaces with just one */
int main(void)
{
    int c = 0;
    int last_c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (last_c != c) putchar(c);
        }
        else putchar(c);
        last_c = c;
    }

    return EXIT_SUCCESS;
}
