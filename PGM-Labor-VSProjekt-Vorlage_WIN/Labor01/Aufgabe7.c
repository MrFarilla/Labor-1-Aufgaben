#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Zwei vorzeichenlose Ganzzahlen speichern
    unsigned int zahl1, zahl2;

    
    scanf("%u %u", &zahl1, &zahl2);

    
    printf("1. Zahl: 0x%x\n", zahl1);

    //achte bitti auf größen unterschied von X und x 
    printf("2. Zahl: 0x%X\n", zahl2);

    return 0;
}
