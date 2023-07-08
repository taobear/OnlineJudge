#include "soii_interview03_countbits.h"

#include <stdlib.h>
#include <string.h>

int *countBits(int n, int *returnSize)
{
    int *result = (int *)malloc(sizeof(int) * (n + 1));
    memset(result, 0, sizeof(int) * (n + 1));
    for (int i = 1; i <= n; i++) {
        result[i] = result[i >> 1] + (i & 0x1);
    }

    *returnSize = n + 1;
    return result;
}