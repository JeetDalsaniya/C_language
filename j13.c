//WAP to Sum of 5 numbers entered by user(while loop)
#include<stdio.h>
void main(){
    int i=1,sum=0,n;
    while(i<=5){
        printf("Enter a Num :");
        scanf("%d",&n);
        sum=sum+n;
        i=i+1;
    }
    printf("sum is = %d",sum);

}