#include <stdio.h>

int main()
{
    // dataType arrayName[size] ;
    // dataType arrayName[size] ={3 ,  4 , 5 , 7 };
    int marks[] = {1, 2, 333, 444};

    printf("enter the size of your array : \n");
    int n;
    scanf("%d", &n);

    int mob[n];
    // mob[0] = 55;
    // mob[3] = 66;
    printf("enter your elements now :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mob[i]);
    };
    printf("the elements ARE :\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", mob[i]);
    };
    return 0;
}