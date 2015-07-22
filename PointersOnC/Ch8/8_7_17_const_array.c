#include<stdio.h>

/*
 * 目的：当const修饰数组的时候，表示数组的元素不允许修改
 *       当修饰数组函数参数时，实际上是修饰指针指向的内容不允许修改
 *       另外可以看到function2的参数b的声明是错误的，const不能放在变量名的后面
 */
void 
function (int const a, int const b[])
{
//    b[1] = 3; //编译错误
}

void 
function1 (int const a, const int b[])
{
//   b[1] = 3;
}

//void 
//function2 (int const a, int b[] const)
//{
//    b[1] = 3;
//}

int 
main ()
{
    int a[3] = {100, 200, 300};
    function (2, a);

    const int b[3] = {1000, 2000, 3000};
//    b[2] = 2; //同样编译错误
}
