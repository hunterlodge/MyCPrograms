#include<stdio.h>

/*
 * 目的：展示字符指针数组，和字符二维数组的不同
 */ 

int
main()
{
    char * keywords_strs[] = {
        "do",
        "for",
        "if",
        "while",
        "return"
    };

    char  keywords_arr[][9] = {
        "do",
        "for",
        "if",
        "while",
        "return"
    };

    printf ("sizeof(keywords_strs): %ld\n", sizeof (keywords_strs));
    printf ("sizeof(keywords_arr): %ld\n", sizeof(keywords_arr));
}

/* result
 * sizeof(keywords_strs): 40
 * sizeof(keywords_arr): 45
 */
