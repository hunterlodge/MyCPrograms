#include<stdio.h>

int fibonacci_non_recur(int n);
int
main ()
{
    int n = 5;
    printf("result for %d: %d\n", n, fibonacci_non_recur(n));
    n = 0;
    printf("result for %d: %d\n", n, fibonacci_non_recur(n));
    n = 1;
    printf("result for %d: %d\n", n, fibonacci_non_recur(n));
    n = 20;
    printf("result for %d: %d\n", n, fibonacci_non_recur(n));

}

int
fibonacci_non_recur(int n)
{
    int a[3] = {1, 1, 1};
    int i;
    for (i = 2; i <= n; i++)
    {
        a[2] = a[0]+ a[1];
        a[0] = a[1];
        a[1] = a[2];
    }
    return a[2];
}

