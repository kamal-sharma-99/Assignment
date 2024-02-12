// WAP to find reverse of string using recursion.
// concept not clear...

#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start < end) {
        // Swap characters at the start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recursive call for the substring between start+1 and end-1
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    char inputString[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);

    // Call the recursive function
    reverseString(inputString, 0, length - 1);

    // Display the reversed string
    printf("Reversed String: %s\n", inputString);

}
