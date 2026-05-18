#include<stdio.h>

int main(){
    int first = 0 , second = 1 ;

    int terms ;
    printf("how many terms do you want to print : \n");
    scanf("%d",&terms);

    for( int i= 0; i<terms; i++){
        
        printf("%d ",first);


        
        int next = first + second ;
        first = second;
        second = next ;

        
    };
    
    
    return 0 ;
}