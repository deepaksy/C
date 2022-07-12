#include<stdio.h>
struct Student
{
    int rollnno:9,age:10;//BITFIELD

};
typedef Student Student;
int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    Student s;
    return 0;
}