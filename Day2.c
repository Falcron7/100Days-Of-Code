#include <stdio.h>

int main() {
    float l, b;
    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    printf("Area of Rectangle : %.2f" , l * b);
    return 0;
}