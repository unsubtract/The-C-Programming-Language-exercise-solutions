#include <stdio.h>
#include <stdlib.h>

/* Print the input one word at a time, where words are seperated by tabs or spaces */
int main(void)
{
    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') putchar('\n');
        else putchar(c);
    }
}
