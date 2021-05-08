#include<stdio.h>
int current,terms,previous=0,temp=1;

int main(){
	int fibonacci(int x);
	printf("enter the terms:");
	scanf("%d",&terms);
	terms=terms-2;
	printf("0 1 ");
	fibonacci(terms);
}
	int fibonacci(int terms){
		if(terms>0){
			current=previous+temp;
			previous=temp;
			temp=current;
			printf("%d ",current);
			fibonacci(terms-1);
		}
	}
