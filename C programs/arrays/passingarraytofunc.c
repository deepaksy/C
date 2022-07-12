#include<stdio.h>
void myFunction(int *param);
int main(){
    int numbers[]={1,2,3,4,5};
    myFunction(numbers);
    return 0;
}


void myFunction(int *param){
    int i=0;
    for(i;i<4;i++){
        printf("%d\n",param[i]);
    }
}