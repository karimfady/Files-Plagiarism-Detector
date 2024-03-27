#include "BR.h"
#include "HM.h"
#include <iostream>
#include <QString>
using namespace std;

int BR::bruteForceSearch( QString& pattern, QString& text) {
    int patternLength = pattern.length();
    int textLength = text.length();

    if (patternLength > textLength) {
        return false;
    }

    for (int i = 0; i <= textLength - patternLength; ++i) {
        int j;
        for (j = 0; j < patternLength; ++j) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == patternLength) {
            return true;
        }
    }

    return false;
}
