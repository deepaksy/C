#include<stdio.h>

int main(){
    int num,fact=1,orig;
    printf("Enter the number you want to find factorial of");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        fact=fact*num;
        num--;
    }
    printf("the factorial of %d is : %d", orig,fact);
}