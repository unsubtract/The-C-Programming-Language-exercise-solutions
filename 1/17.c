#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 81

int getln(char line[], size_t maxline);

int main(void)
{
    int len = 0;
    char line[MAXLINE] = {0};
    
    while ((len = getln(line, MAXLINE)) > 0) {
        if (len > 80) {
            puts(line);
        }
    }

    return EXIT_SUCCESS;
}


int getln(char s[], size_t lim)
{
    size_t i = 0;
    int c = 0;
    
    while (++i < lim) s[i] = '\0'; /* clear buffer */

    /* continue to increment i to find total line length, but stop writing
     * to the buffer if we run out of space */
    for (i = 0; (c = getchar())!=EOF && c != '\n'; ++i) {
        if (i < lim - 1 && c != '\n') s[i] = c;
    }
    if (c == EOF) return 0;
    return (i ? i : 1); /* prevent exit on newline, newline isn't in string */
}
