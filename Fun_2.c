
#include <stdio.h>

int main() {
    char user_input;
    
    printf("Welcome to the test!\n");
    printf("Are you gay? (Y/N): ");
    scanf(" %c", &user_input); 

    if (user_input == 'y' || user_input == 'Y') {
        printf("At least you're honest LOL!\n");
    } else if (user_input == 'n' || user_input == 'N') {
        printf("Lying faggot!\n");
    } else {
        printf("Unknown input.\n");
    }

    return 0;
}
