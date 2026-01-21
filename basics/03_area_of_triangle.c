//this program gets base and height from the user and prints the area of the triangle
#include <stdio.h>
int main()
{
    float b, h, area;

    // Read the base of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &b);

    // Read the height of the triangle
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    // Calculate the area of the triangle
    area = (b * h) / 2;

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}
/*example:
  input:
Enter the base of the triangle: 10
Enter the height of the triangle: 5
  output:
The area of the triangle is: 25.00
  */

