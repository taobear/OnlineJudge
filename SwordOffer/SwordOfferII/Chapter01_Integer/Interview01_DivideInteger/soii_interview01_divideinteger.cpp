#include "soii_interview01_divideinteger.h"

#include <limits.h>

int divideCore(int dividend, int divisor)
{
    int result = 0;
    while (dividend <= divisor) { // 负数，被除数小于除数时才能进入循环
        int value = divisor;
        int quotient = 1;
        while ((value > 0xc0000000) && (value + value >= dividend)) { // value如果小于0xc0000000时，会导致value*2小于0x80000000，存在溢出风险
            quotient += quotient;
            value += value;
        }

        dividend -= value;
        result += quotient;
    }

    return result;
}

int divide(int dividend, int divisor)
{
    if (dividend == 0x80000000 && divisor == 0xffffffff) {
        return 0x7fffffff;
    }

    if (dividend == 0x80000000 && divisor == 0x1) {
        return 0x80000000;
    }

    int negative = 2;
    if (dividend > 0) {
        negative--;
        dividend = -dividend;
    }

    if (divisor > 0) {
        negative--;
        divisor = -divisor;
    }

    int result = divideCore(dividend, divisor);
    return negative == 1 ? -result : result;
}