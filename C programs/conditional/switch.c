#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch='B';

    switch (ch)
    {
    case 'B':
        printf("You chose: %c",ch);
        break;
    case 'C':
        printf("You chose: %c",ch);
        break;
    default:
        printf("Default");
        break;
    }
    return 0;
}
