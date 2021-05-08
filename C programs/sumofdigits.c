#include<stdio.h>

int main(){
    int a,sum=0,original;
    printf("Enter the integer:");
    scanf("%d",&a);
    original=a;
    while(a!=0){
        sum=sum+a%10;
        a=a/10;
    }
    printf("The sum of %d digits is %d\n",original,sum);
}