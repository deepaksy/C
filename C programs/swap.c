//program to swap two number with third variable using call by reference

#include<stdio.h>

int swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d %d",&a,&b);
	printf("Before swap:\nValue of a:%d\nValue of b:%d\n''",a,b);
	swap(&a,&b);
	printf("After swap:\nValue of a:%d\nValue of b:%d",a,b);
}
