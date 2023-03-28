#include<stdio.h>
int main()
{
    int arr[10], i, largest, s_largest;
    printf("\nEnter 10 elements of an array: "); 
    for (i = 0; i <= 9; i++)
        scanf("%d", &arr[i]);
        
    largest = arr[0];
    for (i = 1; i <= 9; i++)
    {
        if (largest < arr[i])
        {
            s_largest = largest;
            largest = arr[i];
        }

        if (largest > arr[i])
        {
            if (s_largest < arr[i]) 
                s_largest = arr[i];
        }
    }    

    printf("\nThe second largest element in an array is: %d", s_largest);

    printf("\n\n");
    return 0;
}