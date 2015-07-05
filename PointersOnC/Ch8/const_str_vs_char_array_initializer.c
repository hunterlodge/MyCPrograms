#include<stdio.h>
#include<string.h>

/*
 * 目的：
 * 说明同样是字符串的形式，用于初始化字符数组和初始化字符指针，是有天壤之别的
 * 前者实际上等价于字符数组, 而后者代表的是一个常量
 */

int 
main ()
{
    char *ptr = "abcdef";
    char arr[] = "ABCDEFGHIJKLMN";

    // *(ptr + 1) = 'x'; //编译不会报错，但是运行时会报"bus erro"，因为试图修改常量
    arr[1] = 'y';
    printf ("sizeof(char*): %ld\n", sizeof (ptr));
    printf ("sizeof(char[]); %ld\n", sizeof (arr));

    // strlen不会计算尾部的'\0'
    printf ("strlen(char*): %ld\n", strlen (ptr));
    printf ("strlen(char[]); %ld\n", strlen (arr));
}

//result:
// sizeof(char*): 8
// sizeof(char[]); 15
// strlen(char*): 6
// strlen(char[]); 14
