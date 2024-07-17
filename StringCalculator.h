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
        // Move input past the delimiter definition
        input = strchr(input, '\n');
        if (input != NULL) {
            input++; // Move past the newline character
        }
        customDelimiter = true;
    }

    // Parse the input string for numbers and compute sum
    const char* token = strtok((char*)input, ",\n");
    while (token != NULL) {
        int number = atoi(token);
        if (number <= 1000) {
            sum += number;
        }
        token = strtok(NULL, ",\n");
    }

    return sum;
}
