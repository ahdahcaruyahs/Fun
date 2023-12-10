#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define NUMBER_OF_WORDS 5
#define testing 10

void printRandomWord(const char *words[], int numWords) {
    int randomIndex = rand() % numWords;
    printf("%s ", words[randomIndex]);}

int main(void) {
    
    srand((unsigned int)time(NULL));
    const char *wordList[] = {
        "Gyat",
        "Rizzler",
        "Skibidi",
        "Fanum Tax",
        "Ohio"
    };

    for (int i = 0; i < NUMBER_OF_WORDS; ++i) {
        printRandomWord(wordList, sizeof(wordList) / sizeof(wordList[0]));
    }

    getch();
}
