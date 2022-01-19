#ifndef __UTIL_H_
#define __UTIL_H_

#include <stdio.h>
#include <vector>
#include <iostream>

inline void print_1d_nums(int *nums, int size)
{
    if (size <= 0) {
        printf("[]\n");
    }

    printf("[");
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", nums[i]);
    }

    printf("%d", nums[size - 1]);
    printf("]\n");
}

inline void print_1d_nums(const std::vector<int> &nums_1d, bool withNewLine = true)
{
    if (nums_1d.empty()) {
        std::cout << (withNewLine ? "[]\n" : "[]");
        return;
    }

    std::cout << "[";
    for (size_t i = 0; i < nums_1d.size() - 1; i++) {
        std::cout << nums_1d[i];
        std::cout << ", ";
    }

    std::cout << nums_1d.back();
    std::cout << "]";

    if (withNewLine == true) {
        std::cout << std::endl;
    }
}

inline void print_2d_nums(const std::vector<std::vector<int>> &nums_2d, bool withNewLine = true)
{
    if (nums_2d.empty()) {
        std::cout << (withNewLine ? "[]\n" : "[]");
        return;
    }

    std::cout << "[";
    for (size_t i = 0; i < nums_2d.size() - 1; i++) {
        print_1d_nums(nums_2d[i], false);
        std::cout << ", ";
    }

    print_1d_nums(nums_2d.back(), false);
    std::cout << "]";

    if (withNewLine == true) {
        std::cout << std::endl;
    }
}

#endif