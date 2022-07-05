#include<stdio.h>
#include<time.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main(int argc, char const *argv[])
{   
    int i=0;
    while(i<2000){
        i++;
        printf("%d\n",i);
        delay(12);
    }
    return 0;
}
