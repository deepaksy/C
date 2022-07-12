#include<stdio.h>

int main(){
    int num=1,*p=NULL;

    p=&num;
    printf("%d",*p);
    return 0;
}