#include<stdio.h>

int main(){
    int num,mod,orig,temp=0;
    printf("Enter your number:");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        mod=num%10;
        temp=temp+(mod*mod*mod);
        num=num/10;        
    }
    if(orig==temp){
    printf("%d is armstrong!",orig);
    }
    else{
        printf("%d is not an armstrong!",orig);
    }

}