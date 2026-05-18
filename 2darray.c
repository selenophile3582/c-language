#include <stdio.h>

int main()
{
    int marks[3][4];
    int marks2[3][4];

    printf("enter the elements : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &marks[i][j]);
        };
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &marks2[i][j]);
        };
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j] + marks2[i][j]);
        };
        printf("\n");
    };

    return 0;
}