#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter X\n");
    scanf("%d", &x);

    if ((x > -21 && x <= 3) || (x > 12))
    {
        int y = 4 * pow(x, 2) + 2;
        printf("Y = %d\n", y);
    }

    if (x > -INFINITY && x <= -41)
    {
        int y = 13 * pow(x, 2) / (11 - 6);
        printf("Y = %d\n", y);
    }

    if (x > -41 && x <= -21 || x > 3 && x <= 12)
    {
        printf("Idi nahui down\n");
    }
    return 0;
}
