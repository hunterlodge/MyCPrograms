#include<stdio.h>

int main()
{
    int c;
    while ( (c = getchar()) !=EOF)
    {
        if (c>('A'-1) && c<('Z'+1))
        {
            c = c+32;
        }
        putchar(c);
    }
}
