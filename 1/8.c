#include <stdio.h>
#include <stdlib.h>

/* Count spaces, tabs and newlines from input */
int main(void)
{
    long space_count = 0;
    long tab_count = 0;
    long newline_count = 0;
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') ++space_count;
        else if (c == '\t') ++tab_count;
        else if (c == '\n') ++newline_count;
    }
    printf("\nSpaces %li - Tabs %li - Newlines %li\n", space_count, tab_count, newline_count);

    return EXIT_SUCCESS;
}
