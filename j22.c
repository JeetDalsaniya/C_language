//WAP to print reverse a number(do while loop)
#include<stdio.h>
void main(){
    int n;
    printf("Enter nember :");
    scanf("%d",&n);
    do{
        printf("%d",n%10);
        n=n/10;
    }
    while(n!=0);    
}