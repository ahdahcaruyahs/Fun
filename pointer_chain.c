//pointer chain program showing the use of pointer chains.
//note: this program may look very weird to newbies

#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;
    
    scanf("%d",&value);

    // Define pointers with increasing levels of indirection
    int *pointer1 = &value;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;
    int ****pointer4 = &pointer3;
    int *****pointer5 = &pointer4;

    // Print the value using the chain of pointers
    printf("End of the pointer chain @ *****pointer5 %d\n", *****pointer5);

    return 0;
}
