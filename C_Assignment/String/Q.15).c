// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char largestWord[100], smallestWord[100];

    char str[100] = "naresh anushka kamal";
    // printf("Enter a string: ");
    // fgets(inputString, 1000, stdin);

    // Initialize variables
    int len = strlen(str);
    int i = 0, start = 0, end = 0, minLen = len, maxLen = 0;

    while (i <= len) {
        // Check for word boundary or end of string
        if (str[i] == ' ' || str[i] == '\0') {
            int wordLen = i - start;

            // Update largest word
            if (wordLen > maxLen) {
                maxLen = wordLen;
                strncpy(largestWord, &str[start], wordLen);
                largestWord[wordLen] = '\0';
            }

            // Update smallest word
            if (wordLen < minLen && wordLen > 0) {
                minLen = wordLen;
                strncpy(smallestWord, &str[start], wordLen);
                smallestWord[wordLen] = '\0';
            }
            // Move to the next word
            start = i + 1;
        }
        i++;
    }
    // Display the results
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}
