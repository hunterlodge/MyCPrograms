#include<stdio.h>

int main()
{
     printf("sizeof a constant is: %d\n", sizeof(20));
     int a = 10;
     int b = 30;

     printf("after sizeof, a is: %d, %d\n", sizeof(a = b+30), a);
}
