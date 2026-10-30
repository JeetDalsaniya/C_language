//WAP to check given number is perfect or not(for loop)
#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("%d+",i);
            sum=sum+i;
        }
    }
    printf("=%d",sum);
    if(sum==n){
        printf("\n%d is a perfect number",n);
    }
    else{
        printf("\n%d is not perfect number",n);
    }

}