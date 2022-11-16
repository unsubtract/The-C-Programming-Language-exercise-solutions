#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 10

int getln(char line[], size_t maxline);
void copy(char to[], char from[]);

/* find the longest input line, print its length
 * and as much of it as can fit in the buffer */
int main(void)
{
    int len = 0;
    int max = 0;
    char line[MAXLINE] = {0};
    char longest[MAXLINE] = {0};
    
    while ((len = getln(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    
    printf("\n%s, %i\n", longest, max);
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

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != 0) ++i;
}
