#include <stdio.h>

int main() {
    int choice;

    printf("Choose the type of conversion:\n1. Kilometers to Miles\n2. Kilograms to Pounds\n3. Celsius to Fahrenheit\n4. Liters to Gallons\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            float kilometers;
            printf("Enter the number of kilometers: ");
            scanf("%f", &kilometers);
            float miles = kilometers * 0.621371;
            printf("%.2f kilometers is equal to %.2f miles\n", kilometers, miles);
            break;
        }
        case 2: {
            float kilograms;
            printf("Enter the number of kilograms: ");
            scanf("%f", &kilograms);
            float pounds = kilograms * 2.20462;
            printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
            break;
        }
        case 3: {
            float celsius;
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &celsius);
            float fahrenheit = celsius * 9/5 + 32;
            printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", celsius, fahrenheit);
            break;
        }
        case 4: {
            float liters;
            printf("Enter the volume in liters: ");
            scanf("%f", &liters);
            float gallons = liters * 0.264172;
            printf("%.2f liters is equal to %.2f gallons\n", liters, gallons);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
s