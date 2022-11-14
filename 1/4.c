#include <stdio.h>
#include <stdlib.h>

/* Print Celcius-Fahrenheit table */
int main(void)
{
    puts("  C\tF");
    for (double cel = -20; cel <= 150; cel += 10){
        printf("%3.0f\t%.0f\n", cel, (9.0 / 5.0) * cel + 32.0);
    }
}
