#include<stdio.h>

void main() {
    float fahrenheit, celsius, kelvin;
    int choice;

    printf("1. Convert temperature from Fahrenheit to Celsius.\n");
    printf("2. Convert temperature from Celsius to Fahrenheit.\n");
    printf("3. Convert temperature from Celsius to Kelvin.\n");
    printf("4. Convert temperature from Kelvin to Celsius.\n");
    printf("Enter your choice (1, 2, 3, or 4): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if(choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if(choice == 3) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("Temperature in Kelvin: %.2f\n", kelvin);
    } else if(choice == 4) {
        printf("Enter temperature in Kelvin: ");
        scanf("%f", &kelvin);
        celsius = kelvin - 273.15;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice.\n");
    }
}

