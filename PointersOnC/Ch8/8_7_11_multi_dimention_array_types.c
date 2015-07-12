#include<stdio.h>

void printPtr (char*, void *);

int
main()
{

    int array2[4][2][3][6];

    printf ("sizeof array2:%lu \n", sizeof (array2));
    printPtr ("array2", array2);
    printf ("size of array2 + 1: %lu\n", sizeof (array2 + 1));
    printPtr ("array2+2", array2+2); // int (*)[2][3][6]: array + 2 * 2 * 3 * 6 * 4
    printPtr ("array2[3]", array2[3]); // int (*) [2][3][6]: array + 3 * 2 * 3 * 6 * 4
    printPtr ("array2[2]-1", array2[2]-1); // int (*) [3][6]: array + 2 * 2 * 3 * 6 * 4 - 1 * 3 * 6 * 4
    printPtr ("array2[2][1]", array2[2][1]); // int (*) [3][6]: array + 2 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4
    printPtr ("array2[1][0]+1", array2[1][0]+1); // int (*) [6]: array + 1 * 2 * 3 * 6 * 4 + 1 * 6 * 4
    printPtr ("array2[1][0][2]", array2[1][0][2]); // int (*) [6]: array + 1 * 2 * 3 * 6 * 4 + 0 * 3 * 6 * 4 + 2 * 6 * 4
    printPtr ("array2[0][1][0]+2", array2[0][1][0]+2); // int*:  array + 0 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4 + 0 * 6 * 4 + 2 * 4
    printPtr ("&array2[3][1][2][5]", &array2[3][1][2][5]); // int*: array + 3 * 2 * 3 * 6 * 4 + 1 * 3 * 6 * 4 + 2 * 6 * 4 + 5 * 4
    


}
void
printPtr (char * str, void * ptr)
{
    printf ("%s, %p\n", str, ptr);  
}
