#include<stdio.h>
int main()
{
    int a[10], i, sum = 0;
    printf("\nEnter 10 elements of an array: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\nThe sum of 10 numbers is: %d", sum);

    printf("\n\n");
    return 0;
}
