#include<stdio.h>

void main(){
    struct employee{
        int id;
        float salary;
        long mobile;
    };
    struct employee e1;
    printf("Enter id: ");
    scanf("%d",&e1.id);
    printf("Enter mobile: ");
    scanf("%ld",&e1.mobile);
    printf("Enter salary of employee: ");
    scanf("%f",&e1.salary);
    printf("Id:%d\nMobile:%ld\nSalary:%.2f",e1.id,e1.mobile,e1.salary);
}