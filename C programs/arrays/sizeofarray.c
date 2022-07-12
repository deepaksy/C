#include<stdio.h>

int main(){
    int a[4];
    size_t n=sizeof(a)/sizeof(int);
    printf("%d",n);
    return 0;
}