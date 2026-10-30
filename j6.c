/* Get student percentage from user and print grade for it using if… else statements
>90 Grade A
>80 Grade B
>70 Grade C
>60 Grade D
>50 Grade E
otherwise Grade F  (if....else)*/
#include<stdio.h>
float main(){
    int percentage;

    printf("Enter Your Percentage :");
    scanf("%d",&percentage);

    if(percentage > 90){
        printf("Grade A");
    }
    else if(percentage > 80){
        printf("Grade B");
    }
     else if(percentage > 70){
        printf("Grade C");
    }
     else if(percentage > 60){
        printf("Grade D");
    }
     else if(percentage > 50){
        printf("Grade E");
    }
    else{
        printf("Grede F\nYou are Fail.");
    }
}