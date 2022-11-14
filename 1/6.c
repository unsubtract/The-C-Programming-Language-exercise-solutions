#include <stdio.h>
#include <stdlib.h>

/* Determine the value of the expression `getchar() != EOF */
int main(void)
{
    printf("%i\n", getchar() != EOF);
    return EXIT_SUCCESS;
}
