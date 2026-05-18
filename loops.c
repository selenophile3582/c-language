#include <stdio.h>

int main()
{

    int k = 5;
    // int k = 10 ;
    // for loop
    /*
    for( int i= 0; i<n; i++){

    };*/
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", i);
    };
    printf("\n");

    // while loop
    // while (condition)
    // {
    //     /* code */
    // }
    int i = 0;
    while (i < 11)
    {
        printf("%d ", i);
        i++; // i = i + 1 ;
    }

    // do while
    // do
    // {
    //     /* code */
    // } while (condition);
    printf("\n");

    i = 0;
    do
    {
        printf("%d ", i);
        i++;

    } while (i < 11);

    return 0;
}