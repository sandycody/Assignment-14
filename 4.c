#include<stdio.h>
int main()
{
    int num[10], i, max;
    printf("\nEnter 10 elements of an array: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &num[i]);

    max = num[0];
    for (i = 0; i <= 9; i++)
    {
        if (max < num[i])
            max = num[i];
    }  
    printf("\nThe greatest number stored in an array is: %d", max);  

    return 0;
}