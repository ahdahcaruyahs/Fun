//testing. Is broken just for fun.

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
    //const char *myString = "123456789";
    size_t length = stringLength(myString);
    
    scanf(%s,myString);

    //printf("Length of the string is: %zu\n" length); //incase the input string gets too long.
    printf("Length of the string %s is: %zu\n",myString, length);

    return 0;
}
