#include<stdio.h>
int swap(int *a ,int arr[]);
int main(){
	int a=-1,b=100;
	int arr[]={1,2,3,4,5};
	swap(&a,arr);
	printf("%d %d %d",a,b,arr[a]);
	return 0;
}

int swap(int *a,int arr[]){
	*a=*a+1;
	int val;
	scanf("%d",&val);
	arr[*a]=val;
	printf("%d \n",arr[*a]);
	return 0;
}
