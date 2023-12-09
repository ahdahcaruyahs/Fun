#include <stdio.h>

int main() {
    int hardness;
    float carbon_content;
    int tensile_strength;
    
    printf("Enter the steel's properties: \n");
    printf("Hardness: ");
    scanf("%d", &hardness);
    printf("Carbon content: ");
    scanf("%f", &carbon_content);
    printf("Tensile strength: ");
    scanf("%d", &tensile_strength);
    
    if (hardness >= 50 && carbon_content < 0.7 && tensile_strength >= 5600) {
        printf("Steel grade check pass!\n");
    } else {
        printf("Steel grade check failed!\n");
    }

    return 0;
}
