#include<stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target) {
   int i, j, x;

    int *deltaTable = malloc ((numsSize) * sizeof (int));
    if (!deltaTable) return NULL;
    int *ret = malloc (2 * sizeof (int));
    if (!ret) return NULL;
    
    for (i = 0; i < numsSize; i++){
        for (x = 0; x < i; x++){
            if (nums[i] == deltaTable[x] ){
                ret[0] = x + 1;
                ret[1] = i + 1;
                
                return ret;
            }
        }
        deltaTable[i] = target - nums[i];
    }
    return NULL;
}


int main()
{
    int a [3] = {3, 2, 4};
    int *b;
    b = twoSum (a, 3, 6);
    printf ("%d, %d \n", b[0], b[1]);
}
