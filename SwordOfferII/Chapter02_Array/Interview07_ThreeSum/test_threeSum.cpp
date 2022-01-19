#include "threeSum.h"

#include <util/print.h>

void test1()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ret = Solution().threeSum(nums);
    std::cout << "test1(): ";
    print_2d_nums(ret);
}

void test2()
{
    vector<int> nums{};
    vector<vector<int>> ret = Solution().threeSum(nums);
    std::cout << "test2(): ";
    print_2d_nums(ret);
}

void test3()
{
    vector<int> nums{0};
    vector<vector<int>> ret = Solution().threeSum(nums);
    std::cout << "test3(): ";
    print_2d_nums(ret);
}

int main(int argc, char **argv)
{
    test1();

    test2();

    test3();

    return 0;
}