#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int numCases, numElements, iterations;
    int i, j, k;
    scanf("%d", &numCases);
    int **array =  malloc(sizeof(int*) * numCases);
    int iterationArray[30000] = {0};
    int numElementsArray[30000] = {0};
    for (i = 0; i < numCases; i++)
    {
        scanf("%d", &numElements);
        numElementsArray[i] = numElements;
        array[i] = malloc(sizeof(int) * numElements);
        scanf("%d", &iterations);
        iterationArray[i] = iterations;
        for (j = 0; j < numElements; j++)
        {
            scanf("%d", &array[i][j]);
        }
        for (j = 0; j < iterations; j++)
        {
            for (k = 0; k < numElements; k++)
            {
                array[i][k] += array[i][k + 1];
            }
        }

    }
    for (i = 0; i < numCases; i++)
    {
        for (j = 0; j < numElementsArray[i]; j++)
        {
            printf("%d ", array[i][j]);
            if (numElementsArray[i] - iterationArray[i] == (j + 1))
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
