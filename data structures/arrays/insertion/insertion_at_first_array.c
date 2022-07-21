#include<stdio.h>

extern void insertionAtFirst(int arr[],int n,int num){
    for(int i=n;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=num;
}