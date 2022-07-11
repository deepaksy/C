#include<stdio.h>
/*
Functions in C: -

F function is a group of statement that perform a task together.
*/

//Function Declaration before the main function
char *greet();
int main(){
    printf("%s",greet());
    return 0;
}

//Function Definition after the main function

char *greet(){
    return "Hello world";
}