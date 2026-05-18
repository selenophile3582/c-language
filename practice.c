#include<stdio.h>

int main()
{
    int lenght = 88;
    int b = 55 ;


    printf("The area of the rectangle is : %d \n", lenght*b);

    int l , w ;
    printf("Enter length and bredth : ");
    scanf("%d %d", &l, &w);
    printf("The area of the rectangle is : %d ", l*w);
    return 0;

}