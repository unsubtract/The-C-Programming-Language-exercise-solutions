#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 80

int getln(char line[], int maxline);
void trim(char string[]);

/* trim trailing whitespace and skip blank lines */
int main(void)
{
    int len = 0;
    char line[MAXLINE] = {0};
    
    while ((len = getln(line, MAXLINE)) >= 0) {
        if (len > 0) {
            trim(line);
            puts(line);
        }
    }

    return EXIT_SUCCESS;
}


int getln(char s[], int lim)
{
    int i = 0;
    int c = 0;
    
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

void trim(char s[])
{
    int i = 0;
    int len = 0;

    while (s[len]) ++len;

    for (i = len - 1; i > 0; --i) {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') s[i] = '\0';
        else break;
    }
    return;
}
