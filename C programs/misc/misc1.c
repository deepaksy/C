#include<stdio.h>

int main(){
    if(sizeof(int)>-1){
        printf("True\n");
        printf("%d",sizeof(int));
    }
    else{
        printf("False\n");
        printf("%d",sizeof(int));
    }

}