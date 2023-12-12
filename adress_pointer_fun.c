#include <stdio.h>

void sayhi();
int main()
{
    unsigned int i = 5;
    unsigned int *k = &i;  // Declare k as a pointer
    unsigned int y = *k;   // Dereference k and store its value in y

    printf("I have assigned the integer or int value to i, the value assigned is: %d\n", i);
    printf("What this means is that the C compiler understood that it had to create some space in memory in order to: \n\n");
    printf("1. Store an int value of 5 and,\n2. Associate the name with 'i' and show the value of %d at this location.\n\n", i);
    sayhi();
    printf("Address of i (unsigned int llu)       : %llu\n", (unsigned long long)&i);
    printf("Address of i  (unsigned int lu)       : %lu\n", (unsigned long)&i);
    printf("Address of i   (unsigned int u)       : %u\n", (unsigned)&i);
    printf("Address of i              (Hex)       : %p\n", (void *)&i);
    printf("Now printing Address of k             : %p\n", (void *)&k);
    printf("Now printing / the adress stored in  y: %p\n", (void *)&y);
    

    return 0;
}

void sayhi()
{
    printf("I just called this function! The only value of this function is this whole ass string.\n");
}
