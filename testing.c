#include <stdio.h>
#include <stdlib.h>

int* memoryAllocation(int numsSize, int* returnSize)
{
    int* array;
    array = (int *)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        array[i] = i + 1;
    }

    *returnSize = numsSize;
    return array;
}

int main()
{
    int size = 5;
    int* allocatedSize = (int *)malloc(sizeof(int));
    int* array = memoryAllocation(size, allocatedSize);
    for (int i = 0; i < *allocatedSize; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}