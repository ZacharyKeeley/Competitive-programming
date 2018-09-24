 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 int main(void)
 {
    int numCases = 0, a = 0, b = 0, upperBound = 0, lowerBound = 0;
    int i, j;
    scanf("%d", &numCases);
    int *array = malloc(sizeof(int) * numCases);
    memset(array, 0, numCases * sizeof(int));
    for (i = 0; i < numCases; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &lowerBound);
        scanf("%d", &upperBound);

        for (j = lowerBound; j <= upperBound; j++)
        {
            if (((1 - (a * j)) % b) == 0)
            {
                array[i]++;
            }
        }
    }

    for (i = 0; i < numCases; i++)
    {
        printf("%d", array[i]);
        if (i != (numCases - 1))
        {
            printf("\n");
        }
    }
    free(array);

    return 0;
 }
