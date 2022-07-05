#include<stdio.h>
int main(int argc, char const *argv[])
{
    if(2>3)
        printf("2>3");
    else if(2>4)
        printf("2>4");

    else if(3>5)
        printf("3>5");
    else
        printf("NO condition true");
    return 0;
}
