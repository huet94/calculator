
#pragma warning(disable:4996)
#include <stdio.h>

void addierer()
{
    int a, b, c;
    printf("    Geben Sie zwei Zahlen ein:\n");
    printf("    Eingabe:");
    scanf("%d", &a);
    printf("    Eingabe:");
    scanf("%d", &b);
    c = (a + b);
    printf("\n  Addition: %d\n", c);
}

void subtrahierer()
{
    int a, b, c;
    printf("    Geben Sie zwei Zahlen ein:\n");
    printf("    Eingabe:");
    scanf("%d", &a);
    printf("    Eingabe:");
    scanf("%d", &b);
    c = (b - a);
    printf("\n  Subtraktion: %d\n", c);
}

void multiplizierer()
{
    int a, b, c;
    printf("    Geben Sie zwei Zahlen ein:\n");
    printf("    Eingabe:");
    scanf("%d", &a);
    printf("    Eingabe:");
    scanf("%d", &b);
    
    c = (a * b);
    printf("\n  Multiplikation: %d\n", c);
}

void dividierer()
{
    int a, b, c;
    printf("    Geben Sie zwei Zahlen ein:\n");
    printf("    Eingabe:");
    scanf("%d", &a);
    printf("    Eingabe:");
    scanf("%d", &b);

    if (b != 0) {
        c = (a / b);
        printf("\n  Division: %d\n", c);
    }
    else {
        printf("\n  Division durch Null ist nicht erlaubt.\n");
    }
}

void help()
{
    int a;

    printf("\n");
    printf("    Sie steuern das Programm indem Sie eine Zahl von 1 bis 5 eingeben.\n\n");
    printf("    1. restart");
    printf("    Eingabetaste zum Beenden.\n");
    printf("\n  Eingabe:");
    scanf("     %d", &a);
    if (a == 1)
        start();
}
