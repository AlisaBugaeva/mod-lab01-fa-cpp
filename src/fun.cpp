// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    bool hasNum = false;
    int i = 0;
    int count = 0;

    while (str[i] ) {
        if (str[i] != ' ') {
            if (!hasNum) {
                if (isdigit(str[i])) {
                    hasNum = true;
                }
            }
        }
        else if (str[i] == ' ') {
            if (!hasNum) {
                count++;
            }
            else hasNum = false;
        }
        i++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
