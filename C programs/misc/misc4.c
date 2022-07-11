#include<stdio.h>

int main(){
    char *p=0;
    char ch='A';
    p=&ch;
    printf("Value at *p= %c\n",*p);
    printf("Value at p= %d\n",p);
    printf("Value at &p= %d\n",&p);
}