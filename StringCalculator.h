#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int add(const char* input);
// Function to parse and compute the sum of numbers in the input string
int add(const char* input) {
    if (input == NULL || *input == '\0') {
        return 0;
    }

    int sum = 0;
    char delimiter = ','; // Default delimiter
    bool customDelimiter = false;

    // Check if the input starts with a custom delimiter definition
    if (strncmp(input, "//", 2) == 0) {
        // Extract the custom delimiter
        delimiter = input[2];
        input += 3; // Move input past the delimiter definition and '\n'
        customDelimiter = true;
    }

    // Parse the input string for numbers and compute sum
    while (*input != '\0') {
        // Handle both the custom delimiter and the default delimiters (',' and '\n')
        if (*input == delimiter || *input == '\n') {
            input++; // Move past the delimiter
            continue;
        }

        // Extract and convert the number
        int number = 0;
        while (*input >= '0' && *input <= '9') {
            number = number * 10 + (*input - '0');
            input++;
        }

        // Check if the number exceeds 1000
        if (number > 1000) {
            continue;
        }

        // Accumulate the valid number into the sum
        sum += number;
    }

    return sum;
}
