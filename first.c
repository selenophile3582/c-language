#include <stdio.h>
// #include<stdlib.h>

/* This is a multi
line comment    */

#include <string.h>

int main()
{

    int Int = 3 ;

    int x = 10;
    // long y = 20 ; // size 2 , 4 bytes
    float z = 3.14;
    char w = 'a';
    printf("Hello World \n \t This is C programming \n  \\\\\\ ");


    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    // scanf("%d", &a);
    printf("You entered: %d and %d\n", a, b);
    printf("Thee sum is : %d and the difference is %d : ",a+b, a-b);



    // naming convention
    // 1. variable name should start with a letter or underscore
    // 2. variable name can contain letters, digits and underscores
    // 3. variable name should not be a keyword

    int _age = 25;
    int age_of_man = 30;

    int age;
    int Age;
    int aGe;
    age = 55;
    printf("Age is %d\n", age);
    age = 60;
    printf("Age is %d\n", age);
    return 0;
}