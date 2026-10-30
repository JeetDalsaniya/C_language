//  Print positive & Negative
#include<stdio.h>
void main(){
    int a;

    printf("Enter Number :");
    scanf("%d",&a);

    if(a >= 0){
        printf("Positive");
    }
    if(a <= 0){
        printf("Negative");
    }
}