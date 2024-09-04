
#pragma warning(disable:4996)
#include <stdio.h>
#include "Header.h"
#include "Funktion.h"

void start()
{
    int a;

    printf("\n\n");
    printf("    \033[31mCALCULATOR\033[0m     \033[32mV 0.0 2024\033[0m\n\n");

    printf("    1. Addition\n");
    printf("    2. Subtraktion\n");
    printf("    3. Multiplikation\n");
    printf("    4. Division\n");
    printf("    5. Hilfe\n");

    printf("\n\n    Eingabe:");
    scanf("%d", &a);

    if (a == 1)
        addierer();
    else if (a == 2)
        subtrahierer();
    else if (a == 3)
        multiplizierer();
    else if (a == 4)
        dividierer();
    else if (a == 5)
        help();
    else
    {
        printf("    Falsche Eingabe\n");
        start();
    }
}

int main()
{
    start();
    return 0;
}
