#include <stdio.h>

int main()
{
    int n, rev = 0;
    printf("enter a number :\n");

    scanf("%d", &n);
     int Pcopy = n ;
    while (n > 0)
    {
        int Ldigit = n % 10; // 5
        rev = (rev * 10) + Ldigit;
        n = n / 10;
    }
    // printf("%d\n", rev);
    if (Pcopy==rev){
        printf("Palindrome \n");
        
    }else
    printf("Not a palindrome \n");
    

    return 0;
}