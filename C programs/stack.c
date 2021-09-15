//Program to implement stack operations in c using call by reference
//Copyright to Deepak suryawanshi 2021.
#include<stdio.h>
#define n 5;

//function declaration
int push(int arr[],int *top);
int pop(int arr[],int *top);
int peek(int arr[],int *top);
int main(){
  int arr[n],top=-1,choice;
  printf("% Welcome to STACK operation %\n");
a:printf("1.push\n2.pop\n3.peek\n4.exit\nEnter your choice:");
	scanf("%d",&choice);
  switch(choice){
      case 1:
			push(arr,&top);
			goto a;
		case 2:
			pop(arr,&top);
			goto a;
		case 3:
			peek(arr,&top);
			goto a;
		case 4:
			break;
  }
  return 0;
}
int push(int arr[],int *top){
	int x;
	printf("Enter the data to insert");
	scanf("%d",&x);
	if(*top==n){
		printf("overflow!");
	}
	else{
		*top=*top+1;
		arr[*top]=x;
	}
	printf("Top stack :%d\n\n",*top);
	return 0;
}

int pop(int arr[],int *top){
	printf("pop function called.\n");
	
	if(*top==-1){
		printf("Underflow condition!\n");
	}
	else{
		arr[*top]=0;
	*top=*top-1;
	}
	
	return 0;
}

int peek(int arr[],int *top){
	printf("peek function called\n");
	printf("Top stack: %d\n",arr[*top]);
	return 0;
}
  
  
