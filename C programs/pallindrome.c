//C program to print the sum of the entered digit.
#include<stdio.h>

int main(){
    int a,b,num=0,orignum;
    printf("enter the digits");
    scanf("%d",&a);
    orignum=a;
    while(a!=0){
        b=a%10;
        num=num*10+b;
        a=a/10;
    }
    if(orignum == num){
        printf("%d is pallindrome!",orignum);
    }
    else{
        printf("%d is not pallindrome number",orignum);
    }
    return 0;
}
