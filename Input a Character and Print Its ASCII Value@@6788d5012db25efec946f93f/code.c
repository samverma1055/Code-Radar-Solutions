#include <stdio.h>

int main() {
    char character;

    // Take a single character as input
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("The ASCII value of '%c' is %d\n", character, character);

    return 0;
}
