#include<stdio.h>

void fun1 ( int n){
    if (n>1 ){
        fun1 ( n-1);
    }
    for ( int i= 0;i<n;i++)
    printf("*");
}
int main (){
    printf("i am a working code \n");
    fun1(5);
    return 0;

    
}
 