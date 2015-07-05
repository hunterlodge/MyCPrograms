#include "stdio.h"


void aFuncWithConstPtrPara(int* i, const int * iPtr, const int a[], int const b[]);
int main()
{
    int i = 5;
    int j = 6;
    int * iPtr = &i;
    // what the pointer points to is const
    const int * constIntPtr = &i;
    // pointer itself is const
    int * const constPtr = &i;

    // *constIntPtr = 3; // error
    constIntPtr = &j;

    *constPtr = 9;
    // constPtr = &j; // error

    int arr[3] = {1, 2, 3};
    const int constArr[5] = {10, 11, 12, 13, 14};

    printf("constPtr: %p, %d\n", constPtr, *constPtr);
    printf("constIntPtr: %p, %d\n", constIntPtr, *constIntPtr);
    

    // passing 'const int *' to parameter of type 'int *' discards qualifiers
    aFuncWithConstPtrPara(constIntPtr, constPtr, constArr, constArr);
    printf("constPtr: %p, %d\n", constPtr, *constPtr);
    printf("constIntPtr: %p, %d\n", constIntPtr, *constIntPtr);
    
    aFuncWithConstPtrPara(constPtr, iPtr, constArr, constArr);
    printf("constPtr: %p, %d\n", constPtr, *constPtr);
    printf("constIntPtr: %p, %d\n", constIntPtr, *constIntPtr);

    aFuncWithConstPtrPara(constPtr, constPtr, constArr, constArr);
    printf("constPtr: %p, %d\n", constPtr, *constPtr);
    printf("constIntPtr: %p, %d\n", constIntPtr, *constIntPtr);
    
    int m = 20;
    int p = 30;
    const int *  n = &p;
    n = &m;
    
}
/* 
 *  a and b are exactly the same
 *  iPtr, a and b are pointers pointing to const variable
 */
void aFuncWithConstPtrPara(int * iPtr, const int * iConstPtr, const int a[], int const b[])
{
    int x = 3;
    // iPtr = &x;
    *iPtr = 10000;
    // i = 100;
    // a[1] = 1000; // error
    // b[1] = 1001; //error

    int xxx[3] = {11,22,33};
    a = xxx;
    b = xxx;

    // a[1] = 55; // error
    // b[1] = 66; // error

    printf("%d\n", a[1]);
    printf("%d\n", b[1]);
    

}
