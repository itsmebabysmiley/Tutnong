#include <stdio.h>
int main(){
    float cel;
    // F = C x 9/5 + 32
    printf("Input celsius: ");
    scanf("%f",&cel);
    float fah = cel * (float)9/5 +32;
    // float fah = cel * 1.8 +32;
    printf("Celsius to Fahrenheit: %.2f", fah);

    return 0;
}