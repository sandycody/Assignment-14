#include<stdio.h>
int main()
{
    int num[10], i, min;
    printf("\nEnter 10 elements of an array: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &num[i]);

    min = num[0];
    for (i = 0; i <= 9; i++)
    {
        if (min > num[i])
            min = num[i];
    }  
    printf("\nThe smallest number stored in an array is: %d", min);  

    printf("\n\n");
    return 0;
}