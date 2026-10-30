//WAP to print maximum from given three numbers.
#include<stdio.h>
void main(){
    int a, b, c;

    printf("Enter Three Number :");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("%d is max",a);
        }
        else{
            printf("%d is max",b);
        }
    }
    else{
      if(b > c){
        printf("%d is max",b);
      }
      else{
        printf("%d is max",c);
      }
    }
    
}