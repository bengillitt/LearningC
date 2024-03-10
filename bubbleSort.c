#include <stdio.h>
#include <stdlib.h>

int* bubbleSort(int unorderedArray[], int unorderedArrayLen, int* endingArrayLen)
{
    int* finishedArray;
    finishedArray = (int*)malloc(unorderedArrayLen * sizeof(int));

    for (int i = 0; i < unorderedArrayLen; i++) {
        finishedArray[i] = unorderedArray[i];
    }

    *endingArrayLen = unorderedArrayLen;
    for (int j = 0; j < *endingArrayLen; j++) {
        for (int i = 1; i < *endingArrayLen; i++) {
            int temp;
            if (finishedArray[i] < finishedArray[i - 1]) {
                temp = finishedArray[i - 1];
                finishedArray[i - 1] = finishedArray[i];
                finishedArray[i] = temp;
                printf("%d > %d = %d\n", finishedArray[i], finishedArray[i - 1], temp);
            }
        }
    }


    return finishedArray;
}

int main()
{
    int startingArray[] = {2, 8, 5, 3, 3, 4, 1};
    int startingArrayLen = sizeof(startingArray) / sizeof(int);
    int* endingArrayLen = (int*)malloc(sizeof(int));
    int* endingArray = bubbleSort(startingArray, startingArrayLen, endingArrayLen);

    printf("%d\n", *endingArrayLen);

    for (int i = 0; i < *endingArrayLen; i++) {
        printf("%d, ", endingArray[i]);
    }

    free(endingArray);
    free(endingArrayLen);

    return 0;
}