#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter the number: - ");
    scanf("%d %d %d",&n1,&n2,&n3);
    n1>n2?(n1>n3?printf("%d is greatest",n1):printf("%d is greatest",n3)):(n2>n3?printf("%d is greatest",n2):printf("%d is greatest",n3));
    return 0;
}