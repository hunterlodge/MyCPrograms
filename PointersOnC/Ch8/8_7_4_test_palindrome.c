#include<stdio.h>

/*
 * 目的：判断给定字符串是否是回文, 函数的实现用指针，而不用数组
 */
void test_palindrome (char * str);

int
main ()
{
    char buffer1[17] = "abcdefghijklmnop";
    char buffer2[17] = "abcdefghhgfedcba";
    char buffer3[18] = "abcdefghihgfedcba";
    char buffer4[2]  = "a";
    char buffer5[1]  = "";

    test_palindrome (buffer1);
    test_palindrome (buffer2);
    test_palindrome (buffer3);
    test_palindrome (buffer4);
    test_palindrome (buffer5);
}

void
test_palindrome (char * str)
{
    char *rear  = str;
    char *front = str;
    // 注意：判断字符c和'\0'是否相等，不能省略为if (c)
    while ( *(++rear) != '\0');

    rear--;
    printf ("front:%c, rear:%c\n", *front, *rear);
    while ( (front <= rear) && (*front++ == *rear--) );

    printf ("front:%c, rear:%c\n", *front, *rear);
    if (front >= rear)
    {
        printf ("%s is a palindrome\n", str);
    }
}

    
