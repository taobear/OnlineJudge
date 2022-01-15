#ifndef __UTIL_H_
#define __UTIL_H_

#include <stdio.h>

inline void print_1d_nums(int *nums, int size)
{
    if (size <= 0) {
        printf("[]\n");
    }

    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", nums[i]);
    }

    printf("%d", nums[size - 1]);
    printf("]\n");
}

#endif