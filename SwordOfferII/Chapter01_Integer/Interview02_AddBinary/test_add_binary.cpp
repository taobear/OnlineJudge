#include "add_binary.h"

#include <stdio.h>
#include <string.h>

void test1()
{
    char a[] = "11";
    char b[] = "10";

    printf("test1(): %s\n", addBinary(a, b));
}

void test2()
{
    char a[] = "1010";
    char b[] = "1011";

    printf("test2(): %s\n", addBinary(a, b));
}

int main(int argc, char **argv)
{
    test1();

    test2();

    return 0;
}