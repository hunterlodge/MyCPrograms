#include<stdio.h>
#include<stdarg.h>

int max_list (int flag, ...);

int
main()
{
    printf ("the max integer in the list is: %d\n", max_list(-1, 22, 12, 100, 92, 1, -2));
    printf ("the max integer in the list is: %d\n", max_list(-1, 23, 234, 8, 29, 234892348, -2));
}

int
max_list (int flag, ...)
{
    va_list var_arg;

    int count = 0;

    int max = 0;

    va_start (var_arg, flag);


    int i = va_arg (var_arg, int);
    while (i > 0)
    {
        if (i > max) max = i;
        i = va_arg (var_arg, int);
    }
    va_end (var_arg);
    return max;
}
