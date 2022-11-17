#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 81

int getln(char line[], int maxline);

/* print lines longer than 80 characters */
int main(void)
{
    int len = 0;
    char line[MAXLINE] = {0};
    
    while ((len = getln(line, MAXLINE)) >= 0) {
        if (len > 80) {
            printf("\n%s, %i\n", line, len);
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
