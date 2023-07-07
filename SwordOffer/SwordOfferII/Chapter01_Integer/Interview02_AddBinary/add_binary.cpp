#include "add_binary.h"

#include <string.h>
#include <stdlib.h>

void reverse(char *str, int s, int e)
{
    while (s < e) {
        char tmp = str[s];
        str[s] = str[e];
        str[e] = tmp;

        s++; e--;
    }
}

char * addBinary(char * a, char * b)
{
    int alen = strlen(a);
    int blen = strlen(b);

    int mlen = (alen > blen ? alen : blen) + 2;
    char *ret = (char *)malloc(sizeof(char) * mlen);
    int retlen = 0;

    int i = alen - 1, j = blen - 1;
    int carry = 0;
    while (i >= 0 || j >= 0) {
        int digitA = i >= 0 ? a[i--] - '0' : 0;
        int digitB = j >= 0 ? b[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        carry = sum >= 2 ? 1 : 0;
        sum = sum >= 2 ? sum - 2 : sum;
        ret[retlen++] = sum + '0';
    }

    if (carry == 1) {
        ret[retlen++] = '1';
    }

    reverse(ret, 0, retlen - 1);
    ret[retlen] = '\0';
    return ret;
}