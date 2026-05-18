#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 2 to %d are:\n", n);

    for(i = 2; i <= n; i++) {

        for(j = 2; j <= i; j++) {

            if(i % j == 0)
                break;
        }

        if(i == j)
            printf("%d ", i);
    }

    return 0;
}