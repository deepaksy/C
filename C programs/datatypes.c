#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int i=12;
    long l=123456789;
    short s=27;
    float f=12.2f;
    double d=23.34;
    char ch='a';
    unsigned int ui =123;
    signed int si=234;

    printf("INTEGER: %d\n",i);
    printf("Size: %d bytes.\n",sizeof(i));
    printf("INT_MIN: %d/t INT_MAX: %d\n",INT_MIN,INT_MAX);
    
    printf("LONG: %d\n",l);
    printf("Size: %d bytes.\n",sizeof(l));
    printf("LONG_MIN: %d/t LONG_MAX: %d\n",LONG_MIN,LONG_MAX);

    printf("SHORT: %d\n",s);
    printf("Size: %d bytes.\n",sizeof(s));
    printf("SHRT_MIN: %d/t SHRT_MAX: %d\n",SHRT_MIN,SHRT_MAX);

    printf("CHAR: %d\n",ch);
    printf("Size: %d bytes.\n",sizeof(ch));
    printf("CHAR_MIN: %d/t CHAR_MAX: %d\n",CHAR_MIN,CHAR_MAX);

    printf("FLOAT: %d\n",f);
    printf("Size: %d bytes.\n",sizeof(f));
    printf("FLOAT_MIN: %d/t FLOAT_MAX: %d\n",__FLT_MIN__,__FLT_MAX__);

    printf("DOUBLE: %d\n",d);
    printf("Size: %d bytes.\n",sizeof(d));
    printf("DOUBLE_MIN: %d/t DOUBLE_MAX: %d\n",__DBL_MIN__,__DBL_MAX__);
    printf("DOUBLE: %d\n",d);
    return 0;
}