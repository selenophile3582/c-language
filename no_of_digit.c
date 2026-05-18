#include <stdio.h>

int main()
{
    int NpOfdigit = 0;
    int n;
    printf("enter jyour number : \n");

    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        NpOfdigit++;
    }
    printf("%d\n", NpOfdigit);

    return 0;
}