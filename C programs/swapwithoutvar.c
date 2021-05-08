// program to swap two number without third variable
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number to swap:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before swap\na= %d\nb= %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na= %d\n b= %d",a,b);
}