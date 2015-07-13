#include<stdio.h>

/* 目的：
 * 证明当形参为常量指针（即指针指向的内容为常量）时，在函数内部通过形参试图修改指针指向的数据都会报错
 * 但是，实际上函数内部实际上是可以间接修改的，尽管这很不make sense，哈哈
 * 另外，要注意不能修改的只是指针指向内容，而这真本身是可以被修改的，虽然这没什么意义，因为形参获取的只是实参的一份拷贝而已，修改它一点意义也没有
 */
void print_array (int* arr, int size);
void const_func (const int * arr);
void func(int * arr);
int
main ()
{
    int a[5] = {1,2,3,4,5};

    const_func (a);

    func(a);

    print_array (a, 5);
}

void
const_func (const int * arr)
{
    // arr [0] = 99;   // error: read-only variable is not assignable
    // arr [1] = 100;  // error: read-only variable is not assignable
    int a = 3;
    int *ptr = &a;
    // arr = ptr;   //修改arr本身没有问题
    ptr = arr;
    ptr [2] = 101;  //虽不能修改arr[x], 却可以间接修改，因此把arr声明为常量指针，实际上起的作用主要是告诉调用者这个函数不会修改数据

}

void
func (int * arr)
{
    arr [0] = 99;
    arr [1] = 100;
}

void
print_array (int* arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf ("%d, ", *(arr + i));
    }
    printf ("\n");
}
