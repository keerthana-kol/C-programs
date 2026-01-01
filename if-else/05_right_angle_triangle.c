#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3,AB2,BC2,CA2,area;
    printf("Enter coordinates of A: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of B: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of C: ");
    scanf("%d %d", &x3, &y3);

     AB2 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
     BC2 = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
     CA2 = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
     area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);

    if (area == 0)
   {
        printf("These points do NOT form a triangle.\n");
    }
    else if (AB2 == BC2 + CA2 || BC2 == AB2 + CA2 || CA2 == AB2 + BC2)
   {
        printf("The points form a RIGHT-ANGLED triangle.\n");
    }
    else
{
        printf("The points form a triangle, but NOT a right-angled triangle.\n");
}
return 0;
}
    }
