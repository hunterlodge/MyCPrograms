#include<stdio.h>
#define MAX_BITS sizeof(int) * 8

unsigned int reverse_bits(unsigned int value);

void printBitsOfInteger(unsigned int a);
int main()
{
    unsigned int x = reverse_bits(25);
    printf("deversed: %u\n", x);
    printBitsOfInteger(25);
    printBitsOfInteger(x);
    
}

void printBitsOfInteger(unsigned int i)
{
    int j = 0;
    
    char bits[MAX_BITS];
    while (j<MAX_BITS)
    {
        bits[j] = i%2;
        i = i / 2;
        j++;
    }
    j = MAX_BITS ;
    while (j > 0 )
    {
        printf("%d", bits[j-1]);
        j--;
        if ( j%4 == 0 )
        {
            printf(" ");
        }
    }
    printf("\n");
}


unsigned int reverse_bits(unsigned int value)
{
    int j = 0;
    int r = 0;

    char bits[MAX_BITS];
    while (j<MAX_BITS)
    {
        bits[j] = value%2;
        value = value/2;
        j++;
    }
    j = 0;
    while (j<MAX_BITS)
    {
        r = r*2 + bits[j];
        j++;
    }
    return r;
}


    



