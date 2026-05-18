#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("The number is positive \n");
    }
    else if (a == 0)
    {
        printf("the number is zero \n");
    }
    else
    {
        printf("the number is negative \n");
    }

    return 0;
}


// && AND GATE  all true = true 
// || OR any one true = true
// ! not     true ka false and vice versa 
