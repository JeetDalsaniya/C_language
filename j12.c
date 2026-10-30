// WAP to print multiplication table(while loop)
#include<stdio.h>
void main(){
    int i, n;
    i = 1;

    printf("Enter N :");
    scanf("%d",&n);

    while(i<=10){
        printf("%d*%d=%d\n",n, i, n*i);
        i = i + 1;

    }
}