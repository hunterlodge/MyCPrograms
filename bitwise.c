#include<stdio.h>

void testBitwiseMode();
int main()
{
    testBitwiseMode();
}

void testBitwiseMode()
{
    printf( ((-5>>2)>0)?"logic":"arithmetic");
}
