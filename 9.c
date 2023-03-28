#include<stdio.h>
int main()
{
    int arr[100], N, rev;
    printf("\nEnter size of an array: ");
    scanf("%d", &N);

    printf("\nEnter %d numbers: ", N);
    for (int i = 0; i <= N-1; i++)
        scanf("%d", &arr[i]);
        
    printf("\nThe %d numbers in reverse order are: \t", N);

    for (int i = N-1; i >= 0; i--)
        printf("%d\t", arr[i]);
        
    printf("\n\n");
    return 0;
}