#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int add(const char* input) {
    int sum = 0;
    int num = 0;
    char delimiter = ',';
    int customDelimiterFound = 0;

    // Check for custom delimiter
    if (input[0] == '/' && input[1] == '/') {
        delimiter = input[2];
        input += 3;
        customDelimiterFound = 1;
    }

    char* token = strtok((char*)input, customDelimiterFound ? &delimiter : ",");
    while (token != NULL) {
        if (strlen(token) > 0) {
            num = atoi(token);
            if (num <= 1000) {
                sum += num;
            }
        }
        token = strtok(NULL, customDelimiterFound ? &delimiter : ",");
    }

    return sum;
}
