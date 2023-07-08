#include "soii_interview05_wordlenmaxproduct.h"

#include <string.h>
#include <stdlib.h>
#include <math.h>

int maxProduct(char ** words, int wordsSize)
{
     int wordMap[wordsSize];
     int wordLen[wordsSize];
     memset(wordMap, 0, sizeof(int) * wordsSize);

    for (int i = 0; i < wordsSize; i++) {
        wordLen[i] = strlen(words[i]);
        for (int j = 0; j < wordLen[i]; j++) {
            wordMap[i] |= (1 << (words[i][j] - 'a'));
        }
    }

    int result = 0;
    for (int i = 0; i < wordsSize; i++) {
        for (int j = i + 1; j < wordsSize; j++) {
            if ((wordMap[i] & wordMap[j]) == 0) {
                result = fmax(result, wordLen[i] * wordLen[j]);
            }
        }
    }

    return result;
}
