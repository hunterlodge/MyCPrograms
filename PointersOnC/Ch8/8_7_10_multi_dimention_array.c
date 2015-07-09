#include<stdio.h>

void printPtr (char*, void *);

int
main()
{
    int array[4][2];

    printf ("sizeof pointer:%lu, sizeof int:%d\n", sizeof (int*), sizeof (int));
    printPtr ("array", array); 
    printPtr ("array+2", array + 2);  // array + 2 * 2 * 4
    printPtr ("array[3]", array[3]);  // array + 3 * 2 * 4
    printPtr ("array[2]-1", array[2] - 1);  // array + 2 * 2 * 4 - 4 注意：array[2]的类型是int *，因此是减去一个整型的宽度
    printPtr ("&array[1][2]", &array[1][2]); //注意：第二维已经越界了，array[1][2] = array[2][0]
    printPtr ("&array[2][0]", &array[2][0]); // array + 2 * 2 * 4


    int array2[4][2][3][6];

    printf ("sizeof array2:%d \n", sizeof (array2));
    printPtr ("array2", array2);
    printPtr ("array2+1", array2+1); // array + 1 * 2 * 3 * 6 * 4
    printPtr ("array2+2", array2+2); // array + 2 * 2 * 3 * 6 * 4
    printPtr ("array2[3]", array2[3]); // array + 3 * 2 * 3 * 6 * 4
    printPtr ("array2[2]-1", array2[2]-1); // array + 2 * 2 * 3 * 6 * 4 - 1 * 3 * 6 * 4
    printPtr ("array2[2][1]", array2[2][1]); // array + 2 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4
    printPtr ("array2[1][0]+1", array2[1][0]+1); // array + 1 * 2 * 3 * 6 * 4 + 1 * 6 * 4
    printPtr ("array2[1][0][2]", array2[1][0][2]); // array + 1 * 2 * 3 * 6 * 4 + 0 * 3 * 6 * 4 + 2 * 6 * 4
    printPtr ("array2[0][1][0]+2", array2[0][1][0]+2); // array + 0 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4 + 0 * 6 * 4 + 2 * 4
    printPtr ("&array2[3][1][2][5]", &array2[3][1][2][5]); // array + 3 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4 + 2 * 6 * 4 + 5 * 4


}
void
printPtr (char * str, void * ptr)
{
    printf ("%s, %p\n", str, ptr);  
}
