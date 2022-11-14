#include <stdio.h>
#include <stdlib.h>

/* Replace tabs with \t, backspaces with \b and backslashes with \\ */
int main(void)
{
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') fputs("\\t", stdout);
        else if (c == '\b') fputs("\\b", stdout);
        else if (c == '\\') fputs("\\\\", stdout);
        else putchar(c);
    }

    return EXIT_SUCCESS;
}
