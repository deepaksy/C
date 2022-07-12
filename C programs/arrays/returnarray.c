#include<stdio.h>
int *getnumber();
int main(){
    printf("%d",getnumber());
    return 0;
}

int *getnumber(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    return *numbers;
}