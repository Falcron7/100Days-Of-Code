#include <stdio.h>

int main() {
    float a, fh;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &a);

    fh = (a * 9 / 5) + 32;

    printf("Temperature in fahrenheit : %f", fh);
    return 0;
}