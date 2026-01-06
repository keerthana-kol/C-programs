/*
    Program: Food Menu Ordering System
    Logic:
    1. Display food menu with prices.
    2. User selects a food item.
    3. Use switch-case to assign price.
    4. Ask quantity and calculate item cost.
    5. Add item cost to total bill.
    6. Display final bill.
*/

#include <stdio.h>
int main() 
{
    int choice, quantity;
    float price = 0.0, total = 0.0;
    char more;

    do 
    {
        printf("\n------ FOOD MENU ------\n");
        printf("1. Dosa        - ₹50\n");
        printf("2. Idli        - ₹30\n");
        printf("3. Fried Rice  - ₹120\n");
        printf("4. Coffee      - ₹20\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
          {
            case 1:
                price = 50;
                break;
            case 2:
                price = 30;
                break;
            case 3:
                price = 120;
                break;
            case 4:
                price = 20;
                break;
            default:
                printf("Invalid choice! Please select a valid item.\n");
                price = 0;
        }

        if (price != 0) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            total = total + (price * quantity);
            printf("Item added successfully!\n");
        }

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } 
      while (more == 'y' || more == 'Y');

    printf("\n------ BILL SUMMARY ------\n");
    printf("Total Amount: ₹%.2f\n", total);
    printf("Thank you! Visit again ●'◡'●\n");

    return 0;
}
/*sample output:
------ FOOD MENU ------
1. Dosa        - ₹50
2. Idli        - ₹30
3. Fried Rice  - ₹120
4. Coffee      - ₹20
Enter your choice: 1
Enter quantity: 2
Item added successfully!
Do you want to order more? (y/n): y

------ FOOD MENU ------
1. Dosa        - ₹50
2. Idli        - ₹30
3. Fried Rice  - ₹120
4. Coffee      - ₹20
Enter your choice: 4
Enter quantity: 1
Item added successfully!
Do you want to order more? (y/n): n

------ BILL SUMMARY ------
Total Amount: ₹120.00
Thank you! Visit again ●'◡'●
*/
