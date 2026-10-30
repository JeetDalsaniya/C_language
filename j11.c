//WAP to print 1 to n(while loop)
#include<stdio.h>
void main(){
    int i, n;
    i = 1;
    printf("Enter N :");
    scanf("%d",&n);

    while (i<=n)
    {
      printf("%d\n",i);
      i = i + 1;
    }
}  