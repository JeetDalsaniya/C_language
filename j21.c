// WAP to print Odd numbers between 1 to n(do while loop)
#include <stdio.h>
void main()
{
    int i=1, n;
    printf("Enter Number :");
    scanf("%d", &n);
    do
    {
        if (i%2!= 0)
        {
            printf("%d,",i);
        }
        i=i+1;
    }
    while(i<=n);
}