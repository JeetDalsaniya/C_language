//WAP to check given number is perfect or not(while loop)
#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("Enter number :");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            printf("%d+",i);
            sum=sum+i;
        }
        i=i+1;
    }
    printf("%d=",sum);
    if(sum==n){
        printf("%d is perfect number.",n);
    }
    else{
        printf("%d is not a perfect number.",n);
    }    
}