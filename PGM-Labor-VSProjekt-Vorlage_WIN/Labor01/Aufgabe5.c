#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int zahl1, zahl2, zahl3;

    scanf("%i %i %d", &zahl1, &zahl2, &zahl3);
    /*wollte abwechslung mit %d bringen nicht wundern*/ 
    printf("Zahl 3: %4d\n", zahl3);
    printf("Zahl 2: %4d\n", zahl2);
    printf("Zahl 1: %4d\n", zahl1);

    return 0;
}
