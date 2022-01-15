#include "divide.h"

#include <stdio.h>
#include <limits.h>

void test1()
{
    int dividend = 15, divisor = 2;
    printf("test1(): %d\n", divide(dividend, divisor));
}

void test2()
{
    int dividend = 7, divisor = -3;
    printf("test2(): %d\n", divide(dividend, divisor));
}

void test3()
{
    int dividend = 0, divisor = 1;
    printf("test3(): %d\n", divide(dividend, divisor));
}

void test4()
{
    int dividend = -2147483648, divisor = -1;
    printf("test4(): %d\n", divide(dividend, divisor));
}

void test5()
{
    int dividend = -2147483648, divisor = 1;
    printf("test5(): %d\n", divide(dividend, divisor));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    test3();

    test4();

    test5();

    return 0;
}