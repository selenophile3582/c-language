#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two numbers : \n");
    scanf("%d %d", &a, &b);

    // using third varibale 
    int temp ; 

    temp = a ;
    a = b ;
    b = temp ; 
    printf("a = %d , b = %d \n",a , b );
    
    // printf("a = %d , b = %d \n", b , a);
    
    // without using variable 
    a = a + b ;
    b = a - b ; 
    a = a - b ;
    
    printf("a = %d , b = %d \n",a , b );

    return 0;
}