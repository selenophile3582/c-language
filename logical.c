// && AND GATE  all true = true
// || OR any one true = true
// ! not     true ka false and vice versa

#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    if (a % 2 == 0)
    {
        printf("the number is even \n");
    }
    else
    {
        printf("the numver is odd \n");
    }

    if ( a % 2 ==0 && a % 5 == 0){
        printf("the number is multiple of 10\n");
        
    }
    
    if (b % 2 == 0 || b % 5 == 0 )
    {
        printf("either divisible by 5 or 2 or both \n");
        
    }

    if ( a!=5){
        printf("a is not 10\n");
        
    }


    return 0;
}