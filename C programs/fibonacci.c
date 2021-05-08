#include<stdio.h>

int main(){
	int terms,previous=0,temp=1,current;
	printf("Enter the no. of terms that you want to enter:");
	scanf("%d",&terms);
	terms=terms-2;
	printf("0 1 ");
	while(terms!=0){
		current=previous+temp;
		printf("%d ",current);
		previous=temp;
		temp=current;
		terms--;
	}
}

