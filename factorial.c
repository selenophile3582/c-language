#include <stdio.h>

int main()
{
    int n;
    int fact = 1;
    printf("enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i ;
        // fact = fact * i;
    };
    printf("the factorial of %d is %d \n", n, fact);

    return 0;
}