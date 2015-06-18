#include<stdio.h>

char *find_char(char const *source, char const *chars);
int main()
{
    char* strs[3] = {"xxx\0", "DJKJCDD\0", "ABC\0"};
    char* src = "ABC";
    printf("%s\n", find_char(src, strs[0]));
    printf("%s\n", find_char(src, strs[1]));
    printf("%s\n", find_char(src, strs[2]));
}

char *find_char(char const *source, char const *chars)
{
    if (!source || !chars) return NULL;
    char * ret = NULL;
    const char * p1 = source;
    const char * p2 = chars;
    int flag = 0;
    char c;
    while ( (c = *p1) != '\0')
    {
        printf ("=== p1: %c\n", c);
        char d;
        while ( (d = *p2++) != '\0')
        {
            printf ("p2: %c\n", *p2);
            if (c == d)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            ret = p1;
            break;
        }
        p2 = chars;
        p1++;
    }
    return ret;
}


