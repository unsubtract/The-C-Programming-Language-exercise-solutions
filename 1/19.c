#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 80

int getln(char line[], int maxline);
void reverse(const char source[], char dest[]);

/* reverse each line from input */
int main(void)
{
    char line[MAXLINE] = {0};
    char rev[MAXLINE] = {0};
    
    while (getln(line, MAXLINE) >= 0) {
        reverse(line, rev);
        puts(rev);
    }

    return EXIT_SUCCESS;
}


int getln(char s[], int lim)
{
    int i = 0, c;
    
    while (++i < lim) s[i] = '\0'; /* clear buffer */

    /* continue to increment i to find total line length, but stop writing
     * to the buffer if we run out of space */
    for (i = 0; (c = getchar())!=EOF; ++i) {
        if (i < lim - 1 && c != '\n') s[i] = c;
        else if (c == '\n') {
            ++i;
            break;
        }
    }

    return i - 1;
}

void reverse(const char source[], char dest[])
{
    int i = 0, len = 0;

    while (source[++len]); /* string length */

    dest[len] = '\0';
    for (i = 0; i < len; ++i) dest[i] = source[len - 1 - i];

    return;
}
