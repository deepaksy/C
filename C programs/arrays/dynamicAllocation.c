#include<stdio.h>

int main(){
    int list[100],i=0;
    for(i=0;i<=10;i++){
        scanf("%d",&list[i]);
    }
    for(i=0;i<=10;i++){
        printf("%d",list[i]);
    }
    return 0;
}