#include<stdio.h>

int main(){
    int n , sum = 0 ; 
    printf("enter a num : \n");
    scanf("%d",&n);

    for( int i= 1; i<=n; i++){
        // sum = sum + i ;
        sum += i;
    };
    printf("the sum = %d \n",sum );
    
    
    
    return 0 ;
}