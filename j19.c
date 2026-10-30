//WAP to find factors of a number (for loop)
#include<stdio.h>
void main(){
    int i,n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    
    }
}