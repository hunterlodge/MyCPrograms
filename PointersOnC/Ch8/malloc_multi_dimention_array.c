#include<stdio.h>
#include<stdlib.h>

/*
 * write a matrix allocator, which returns a pointer to a matrix by which the user can access elements in the same way as with a double-dimential array  i.e. ptr[i][j]
 * The basic idea here is first create an array of rows pointers. And then make each of the pointers point to an array of cols elements.
 * So the return type of the allocator should be int **. And the total memory used by the matrix would be rows * sizeof (int *) + cols * rows * sizeof (int)
 */
int ** alloc_matrix (int rows, int cols)
{
    int ** ptr = malloc ( rows * sizeof (int *));
    
    if (ptr){

        int i;
        for (i = 0; i < rows; i++)
        {
            ptr[i] = malloc (cols * sizeof(int));
        }
    }
    return ptr;
}

int
main ()
{
    int ** matrix_ptr = alloc_matrix (3, 5);
    printf ("sizeof matrix_ptr: %lu\n", sizeof (matrix_ptr));
    
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
        {
            matrix_ptr[i][j] = i + j;
        }
    printf ("matrix_ptr[2][4]: %d\n", matrix_ptr[2][4]);
}
