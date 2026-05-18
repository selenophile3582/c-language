#include <stdio.h>

int main()
{
    for (int i = 0; i < 101; i++)
    {

        if (i % 3 == 0)
            continue;

        if (i == 50 ){
            break ;
        }   
        printf("%d ", i);
    }

    return 0;
}