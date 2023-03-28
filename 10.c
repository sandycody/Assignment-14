#include<stdio.h>
int main()
{
    int arr1[5], arr2[5], i, j;
    printf("\nEnter 5 elements of an array: ");
    for (i = 0; i <= 4; i++)
        scanf("%d", &arr1[i]);

    printf("\nThe elements of 1st array are: \t");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("\n\nThe copied elements of 1st array into the 2nd array are: \t");
    for (i = 0; i <= 4; i++)
        printf("%d\t", arr2[i]);

    
    printf("\n\n");
    return 0;
}