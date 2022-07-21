//C program to insert an element at nth position
#include<stdio.h>

void insertAtNthPosArray(int arr[],int size,int number,int pos){
    int i;
    printf("Array elements before insertion\n");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    size++;

    for(i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=number;
    printf("Array after insertion\n");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}