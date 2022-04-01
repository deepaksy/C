#include <stdio.h>
int main(){
	int count=0;
	int arr1[5]={1,2,3,4,5};
	for(int i=0; i<=sizeof(arr1); i++){
		count++;
	}
	printf("count: %d",count);
	return 0;
}
