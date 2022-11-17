#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 80

int getln(char line[], int maxline);
void reverse(char string[]);

/* reverse each line from input */
int main(void)
{
    char line[MAXLINE] = {0};
    
    while (getln(line, MAXLINE) >= 0) {
        reverse(line);
        puts(line);
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

void reverse(char s[])
{
    int i = 0;
    int len = 0;

    while (s[len]) ++len;
    char *tmp = malloc(len + 1);

    while ((tmp[i] = s[i]) != 0) ++i;
    
    for (i = 0; i < len; ++i) {
        s[len - 1 - i] = tmp[i];
    }
    free(tmp);
    return;
}
