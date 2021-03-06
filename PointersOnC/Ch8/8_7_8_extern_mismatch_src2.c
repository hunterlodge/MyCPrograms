#include<stdio.h>

/*
 * 本题是一个用于说明指针和数组名多么不同的最好示例:
 * 当一个变量被使用的时候，它一定是按照它的声明方式来使用，例如main函数中的a和b会分别被当做指针和数组来使用
 * 于是a[3]的访问过程是这样的：首先编译器认为a是一个指针，于是它认为a的存储内容是一个地址，并且把该地址的值加上3 * sizeof(int)，然后再访问，即* (a + 3)。但是a在src1文件中的实际定义是一个数组，于是变成了将数组中的第一个元素的内容加上 3*sizeof(int)，这显然会出现错误，这也就解释了为什么访问a[3]会出现内存访问错误
 * 而b[3]的访问过程则为：将b自身的地址加上3*sizeof(int)，然后访问那个地址的内容，尽管在很多时候这并不会导致运行出错而终止，但是实际上访问的内存内容是unexpected的垃圾值
 * 结论：指针和数组的下标访问方式是有很大区别的：ptr[i]是拿ptr的内容加上偏移，而arr[i]是直接拿arr本身的值再加上偏移
 */
extern int *a; 
extern int b[];

int x, y;

int
main ()
{
//    x = a[3]; // segment fault
    y = b[3];
}
