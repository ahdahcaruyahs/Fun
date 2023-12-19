//CPUCL Lab Practical practise
//Author: Shaurya Chadha
//date: 19th December 2023

#include <conio.h>
#include <stdio.h>

void multiply();

int main(){ //return type
    
    multiply();
    return 0;
}

void multiply() {
    int a,x,range;
    
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("You've entered: %d\n",a);
    
    printf("Enter the range: ");
    scanf("%d",&range);
    
    x = 1;
    while(x<=range){
        printf("%d x %d: %d\n",a,x,a*x);
        x++;
        
    }
}
    
