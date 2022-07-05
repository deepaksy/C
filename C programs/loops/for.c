#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int i=0;
    for(;;){
        i++;
        printf("%d\n",i);
        if(i==20)
            break;
    }
    return 0;
}
