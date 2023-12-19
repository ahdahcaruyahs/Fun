#include <stdio.h>

void intToRoman(int num) {
    // Arrays to store the Roman numeral symbols and their values
    /**/int values[] = {1000, 900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1};
    char* numerals[] = { "M","CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Iterate through the values and build the Roman numeral representation
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", numerals[i]);
            num -= values[i];
        }
    }
}

int main() {
    int inputNum;
    
    // User prompt
    printf("Number to Roman numeral converter.");
    printf("\n--------------------------------\n\n");
    printf("Enter the number: ");
    
    // Reading user input
    scanf("%d", &inputNum);

    // Display the Roman numeral representation
    printf("\nRoman numeral: ");
    intToRoman(inputNum);

    return 0;
}
