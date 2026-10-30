//WAP to print Zero,Positive,Negative (if...else)
#include<stdio.h>
void main(){
    int a;

    printf("Enter Number :");
    scanf("%d",&a);

    if(a > 0){
        printf("Positive");
    }
    else if(a == 0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
}