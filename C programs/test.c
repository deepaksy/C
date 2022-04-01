#include <stdio.h>

int main(){

static int counter;
int g;

printf("\n static var %d", counter);
printf("\n non-static var %d",g);
return 0;
}
