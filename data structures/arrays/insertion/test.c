#include<stdio.h>
#include "insertion_at_first_array.c"
#include "Insertion_at_n_Array.c"
int main(){
    int array[10]={2,3,4,5,6};
    int num=1;
    int n=5;
    insertionAtFirst(array,n,num);
    for(int i=0;i<=5;i++){
        printf("%d\n",array[i]);
    }
    insertAtNthPosArray(array,6,24,7);
    return 0;
}