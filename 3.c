#include <stdio.h>
int main()
{
    int num[10], i, sumEven = 0, sumOdd = 0;
    printf("\nEnter 10 elements of an array: ");
    
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
            sumEven += num[i];

        else
            sumOdd += num[i];
    }
    printf("\nThe sum of all even numbers is: %d\n", sumEven);

    printf("\nThe sum of all odd numbers is: %d", sumOdd);

    printf("\n\n");
    return 0;
}