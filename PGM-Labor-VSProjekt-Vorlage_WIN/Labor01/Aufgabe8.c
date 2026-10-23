#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t zahl8;
    int16_t zahl16;
    int32_t zahl32;
    int64_t zahl64;

    // Belegten Speicher in Bytes ausgeben
    printf("Belegter Speicher: %zu Bytes\n", sizeof(zahl8));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(zahl16));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(zahl32));
    printf("Belegter Speicher: %zu Bytes\n", sizeof(zahl64));

    return 0;
}