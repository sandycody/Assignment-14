#include<stdio.h>
int main()
{
    int a[10], i, sum = 0;
    float avg;
    printf("\nEnter 10 elements of an array: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 9; i++)
        sum += a[i];

    avg = sum / 10.0;
    printf("\nThe average of 10 numbers is: %.3f", avg);

    printf("\n\n");
    return 0;
}