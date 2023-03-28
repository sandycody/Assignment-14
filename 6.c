#include<stdio.h>
int main()
{
    int arr[10], i, j, temp;
    printf("\nEnter 10 elements of an array: ");
    for (i = 0; i <= 9; i++)
        scanf("%d", &arr[i]);

    printf("\nThe array before sorting: \t");
    for (i = 0; i <= 9; i++)
        printf("%d\t", arr[i]);

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nThe array after sorting: \t");
    for (i = 0; i <= 9; i++)
        printf("%d\t", arr[i]);

    printf("\n\n");
    return 0;
}