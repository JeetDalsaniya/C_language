//WAP to find largest number from given 2 numbers using ? :


#include<stdio.h>
void main(){
    int a,b,max;
    printf("Enter Two Number :");
    scanf("%d %d", &a, &b);
    max = a>b?a:b;
    printf("%d is largest",max);
}