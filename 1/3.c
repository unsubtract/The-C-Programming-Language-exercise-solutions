#include <stdio.h>
#include <stdlib.h>

/* Print Fahrenheit-Celcius table, using floats and with heading */
int main(void)
{
    puts("  F\tC");
    for (double fahr = 0; fahr <= 300; fahr += 20){
        printf("%3.0f\t%.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}
