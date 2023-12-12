#include <stdio.h>

size_t stringLength(const char *str) {
    size_t length = 0;

    // Iterate through the characters until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    const char *myString = "123456789";
    //const char myString[] = "123456789"; //use if manipulation required.
    size_t length = stringLength(myString);

    char inputBuffer[100]; // Adjust the size as needed
    printf("Enter a string: ");
    scanf("%s", inputBuffer);

    myString = inputBuffer;
    printf("Length of the string %s is: %zu\n", myString, length); //z for size_t and what not

    return 0;
}
