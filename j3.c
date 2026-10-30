// odd & even Num.
#include<stdio.h>
void main(){
    int a;

    printf("Enter Num :");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("Even");
    }
    if(a%2 != 0){
        printf("Odd") ;
    }
}