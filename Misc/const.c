#include<stdio.h>

int a = 10;

void func()
{
    const int b ;
    int c;
    printf("%d, %d\n", b, c);
    printf("addr: %p, %p, %p\n", &a, &b, &c);
    // b = 20;  // error: read-only variable is not assignable
    c = 30;
}
int main()
{
    func();
}
    
