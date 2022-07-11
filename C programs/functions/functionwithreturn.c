#include<stdio.h>
#include<math.h>
int randomnumber(){
    return floor(23.336645);
}

double circumference(double radius){
    return (3.14)*radius*radius;
}
char character(){
    return 'a';
}

float getFloat(){
    return 2.0f;
}
int main(){

    printf("Float: %f",getFloat());
    printf("Character: %c",character());
    printf("Circumference: %ld",circumference(3.3));
    printf("Random number: %d",randomnumber());
    return 0;
}