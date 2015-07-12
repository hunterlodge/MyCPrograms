#include<stdio.h>

void printPtr (char*, void *);

int
main()
{

    int array2[4][5][3] ;
    int i, j, k;
    for (i = 0; i < 4; i++)
        for (j = 0; j<5; j++)
            for (k = 0; k < 3; k++)
            {
                array2[i][j][k] = i + k + j;
            }

    printf ("sizeof array2:%lu \n", sizeof (array2));
    printPtr ("*array2", *array2);
    printPtr ("== array2[0]", array2[0]);
    printf ("==========================\n");
    printPtr ("*(array2 + 2)", *(array2+2)); 
    printPtr ("== array2[2]", array2[2]); 
    printf ("==========================\n");
    printPtr ("*(array2 + 1) + 4", *(array2+1)+4); //注意和下面两个的区别
    printPtr ("== &array2[1][4]", &array2[1][4]); 
    printf ("==========================\n");
    printPtr ("*(*(array2 + 1) + 4)", *(*(array2+1)+4)); 
    printPtr ("array2[1][4]", &array2[1][4]); 
    printf ("==========================\n");
    printPtr ("*(*(*(array2 + 3) + 1 ) + 2)", *(*(*(array2+3)+1)+2)); 
    printPtr ("== array2[3][1][2]", array2[3][1][2]); 
    printf ("==========================\n");
    printPtr ("*(*(*array2 + 1) + 2 ) ", *(*(*array2+1)+2)); 
    printPtr ("== array2[0][1][2]", array2[0][1][2]); 
    printf ("==========================\n");
    printPtr ("*(**array2 + 2) ", *(**array2+2)); 
    printPtr ("== array2[0][0][2]", array2[0][0][2]); 
    printf ("==========================\n");
    printPtr ("**(*array2 + 1) ", **(*array2+1)); 
    printPtr ("==  array2[0][1][0]", array2[0][1][0]); 
    printf ("==========================\n");
    printPtr ("***array2", ***array2); 
    printPtr ("== array2[0][0][0]", array2[0][0][0]); 

}
void
printPtr (char * str, void * ptr)
{
    printf ("%s, %p\n", str, ptr);  
}
