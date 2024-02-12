// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = "hello my name is kamal and my profession is coding and is is is so many times";
    char findWord[5] = "is";
    int occurrences = 0;
    int len = strlen(str);

    for (int i = 0; i < len; ++i) {
        // Check for word boundary or end of string
        if (strncmp(&str[i], findWord, strlen(findWord)) == 0) {
            occurrences++;
        }
    }
    printf("The word : %s : appears %d times in the string.\n", findWord, occurrences);
}