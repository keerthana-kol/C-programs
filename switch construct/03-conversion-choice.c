/*Write a C program that allows the user to perform one of the following unit conversions:
Kilometers to Meters
Centimeters to Meters
Fahrenheit to Celsius
Kilograms to Grams

The program should:
Ask the user to choose a conversion option (1–4).
Take the input value from the user.
Perform the selected conversion using a switch statement.
Display the converted value.
Display an error message if the user enters an invalid option.
*/
#include <stdio.h>
int main() 
{
    int choice;
    float num, result;
    printf("Choose conversion:\n1. km to m\n2. cm to m\n3. F to C\n4. kg to g\n");
    scanf("%d", &choice);
    printf("Enter the number: ");
    scanf("%f", &num);

    switch(choice) 
    {
        case 1: // km to m
            result = num * 1000;
            printf("%.2f km = %.2f m\n", num, result);
            break;

        case 2: // cm to m
            result = num / 100;
            printf("%.2f cm = %.2f m\n", num, result);
            break;

        case 3: // F to C
            result = (num - 32) * 5.0/9;
            printf("%.2f F = %.2f C\n", num, result);
            break;

        case 4: // kg to g
            result = num * 1000;
            printf("%.2f kg = %.2f g\n", num, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
/*sample output :1(km to m)
Choose conversion:
1. km to m
2. cm to m
3. F to C
4. kg to g
1
Enter the number: 5
5.00 km = 5000.00 m
***************************************
sample output : 2(f to c)  
Choose conversion:
1. km to m
2. cm to m
3. F to C
4. kg to g
3
Enter the number: 98
98.00 F = 36.67 C
***************************************
sample output : 3(invalid choice)  
Choose conversion:
1. km to m
2. cm to m
3. F to C
4. kg to g
7
Enter the number: 50
Invalid choice!*/
  

  

