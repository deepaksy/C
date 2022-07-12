#include<stdio.h>


int main(){
    int number[]={1,2,3,4,5};
    int *p;
    p=number;
    printf("%d",*p+2);
    return 0;
}