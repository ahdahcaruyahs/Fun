#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;
    printf("WARNING: BMI does not take into account whether the weight is carried as muscle or fat, just the number. ");
    printf("Those with a higher muscle mass, such as athletes, may have a high BMI but not be at greater health risk. ");
    printf("Those with a lower muscle mass, such as children who have not completed their growth or the elderly who may be losing some muscle mass may have a lower BMI.");
    printf(" During pregnancy and lactation, a woman's body composition changes, so using BMI is not appropriate.");
    printf("\nWith that being said let's continue.\n");
    
    printf("\nEnter your height(cm): ");
    scanf("%f",&height);
    
    printf("\nEnter your weight(kg): ");
    scanf("%f",&weight);
    height = height / 100; 
    bmi = weight / height;
    printf("BMI: %.2f\n", bmi);
    
    if (bmi < 15) {
        printf("Starving\n");
    } else if (bmi <= 17.5) {
        printf("Anorexic\n");
    } else if (bmi <= 18.5) {
        printf("Underweight\n");
    } else if (bmi <= 24.9) {
        printf("Ideal\n");
    } else if (bmi <= 25.9) {
        printf("Overweight\n");
    } else if (bmi <= 30.9) {
        printf("Obese\n");
    } else if (bmi >= 40) {
        printf("Morbidly Obese\n");
    } else {
        printf("Unknown input!\n");
    }
    
    return 0;
}
