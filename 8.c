#include<stdio.h>
int main()
{
    int arr[10], i, smallest, s_smallest;
    printf("\nEnter 10 elements of an array: "); 
    for (i = 0; i <= 9; i++)
        scanf("%d", &arr[i]);
        
    smallest = arr[0];
    for (i = 1; i <= 9; i++)
    {
        if (smallest > arr[i])
        {
            s_smallest = smallest;
            smallest = arr[i];
        }

        if (smallest < arr[i])
        {
            if (s_smallest > arr[i]) 
                s_smallest = arr[i];
        }
    }    

    printf("\nThe second smallest element in an array is: %d", s_smallest);

    printf("\n\n");
    return 0;
}