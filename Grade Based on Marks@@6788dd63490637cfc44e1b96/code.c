#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks :");
    scanf("%d",&marks);
    if(marks>=0 && marks <60){
        printf("'F'");
    }
    if(marks >=60 && marks <70){
        printf("'D'");
    }
    if(marks >=70 && marks <80){
        printf("'C'");
    }
    if(marks >=80 && marks <90){
        printf("'B'");
    }
    

}