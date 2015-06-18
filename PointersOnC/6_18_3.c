#include<stdio.h>

#define NUL '\0'

void reverse_substr (char *str);
int main()
{
    char str[10] = "123456789\0";
    reverse_substr(str);
    printf("after reversion: %s\n", str);
    char str2[11] = "0123456789\0";
    reverse_substr(str2);
    printf("after reversion: %s\n", str2);
}

void reverse_substr (char *str)
{
    int len = 0;
    char *p = str;
    while (*p++ != NUL)len++;
    p = str + len;
    char c;
    while (p-- > str)
    {
        c = *p;
        *p = *str;
        *str = c;
        str++;
    }
    while (*str++ != NUL);
    str = str - len;
}


