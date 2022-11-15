#include <stdio.h>
#include <stdlib.h>
double fahr_to_cel(double fahr);

/* Print Fahrenheit-Celcius table, using function for conversions */
int main(void)
{
    puts("  F\tC");
    for (double fahr = 0; fahr <= 300; fahr += 20){
        printf("%3.0f\t%.2f\n", fahr, fahr_to_cel(fahr));
    }
}

double fahr_to_cel(double fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
