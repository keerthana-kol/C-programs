/* Design a C program to track daily expenses under different categories using arrays.
The program should allow the user to:
Enter the number of days for which expenses are to be tracked.
Record expenses for each day under predefined categories such as:
-Food
-Travel
-Study
-Entertainment
-Miscellaneous
Store and accumulate expenses category-wise using arrays.

Calculate and display:
-Total expense for each category
-Overall total expense
-Category with the highest total expense */
#include <stdio.h>
int main()
{
    int days, i, j;
    float expense;
    float total[5] = {0};  // 5 categories
    char *categories[5] = {"Food", "Travel", "Study", "Entertainment", "Misc"};

    printf("Enter number of days to track expenses: ");
    scanf("%d", &days);

    for (i = 0; i < days; i++) {
        printf("\nDay %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Enter expense for %s: ", categories[j]);
            scanf("%f", &expense);
            total[j] += expense;
        }
    }

    printf("\n--- Expense Summary ---\n");
    float overall_total = 0;
    for (i = 0; i < 5; i++) {
        printf("%s: %.2f\n", categories[i], total[i]);
        overall_total += total[i];
    }

    printf("Overall Total Expense: %.2f\n", overall_total);

    // Optional: Find highest spending category
    int maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (total[i] > total[maxIndex])
            maxIndex = i;
    }
    printf("Highest Spending Category: %s (%.2f)\n", categories[maxIndex], total[maxIndex]);

    return 0;
}
/* sample input :
Enter number of days to track expenses: 2

Day 1:
Enter expense for Food: 120
Enter expense for Travel: 50
Enter expense for Study: 30
Enter expense for Entertainment: 40
Enter expense for Misc: 10

Day 2:
Enter expense for Food: 100
Enter expense for Travel: 60
Enter expense for Study: 20
Enter expense for Entertainment: 50
Enter expense for Misc: 15

sample output:
--- Expense Summary ---
Food: 220.00
Travel: 110.00
Study: 50.00
Entertainment: 90.00
Misc: 25.00
Overall Total Expense: 495.00
Highest Spending Category: Food (220.00)


*/
