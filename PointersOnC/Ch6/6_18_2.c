#include<stdio.h>

#define NUL '\0'

int del_substr (char *str, char const *substr);
int main()
{
    char str[13] = "dsfabcfjkdsk\0";
    char *substr = "abc\0";
    del_substr(str, substr);
    printf("after deletion: %s\n", str);
    char str2[13] = "dsfabcfjkdsk\0";
    del_substr(str2, "");
    printf("after deletion: %s\n", str2);
}

int del_substr (char *str, char const *substr)
{
    const char *p = substr;
    char *m = str;
    char *start = NULL;
    char *end = NULL;
    int ret = 0 ;
    if (*substr == NUL) return 1;
    while (*m != NUL)
    {

        start = m;

        char * i = m;
        char c = *i;
        char d = *p;
        while (c == d && d != NUL && c != NUL)
        {
            c = *(++i);
            d = *(++p);
        }
        if ( d == NUL )
        {
            end = i;
            ret = 1;
            break;
        }
        p = substr;
        m++;

    }
    printf ("=== start: %c, end:%c\n", *start, *end);
    while ( *end != NUL )
    {
        *start++ = *end ++;
    }
    *start = NUL;
    return ret;

}
