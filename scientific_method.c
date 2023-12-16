#include <stdio.h>
#include <string.h>

int main() {
    // Step 1: Variables used for observing a phenomena
    char weather[20];
    char mood[20];

    printf("What is the weather like today? (Sunny, Cloudy, Rainy): ");
    scanf("%s", weather);

    printf("How do you feel today? (Happy, Neutral, Sad): ");
    scanf("%s", mood);

    // Step 2: Formation of hypothesis 
    char hypothesis[100];

    if (strcmp(weather, "Sunny") == 0) {
        strcpy(hypothesis, "People tend to be happier on sunny days.");
    } else if (strcmp(weather, "Rainy") == 0) {
        strcpy(hypothesis, "People might feel sadder on rainy days.");
    } else {
        strcpy(hypothesis, "Weather may not significantly impact people's mood.");
    }

    // Step 3: Transforming your hypothesis into testable predictions
    char prediction[100];

    if (strstr(hypothesis, "happier") != NULL) {
        strcpy(prediction, "If it's sunny, people are more likely to report a happy mood.");
    } else if (strstr(hypothesis, "sadder") != NULL) {
        strcpy(prediction, "If it's rainy, people are more likely to report a sad mood.");
    } else {
        strcpy(prediction, "There may not be a clear relationship between weather and mood.");
    }

    // Step 4: Evaluating the predictions by making systematic planned observations
    char userMood[20];

    printf("How would you describe your mood today? (Happy, Neutral, Sad): ");
    scanf("%s", userMood);

    // Step 5: Use the results of the observations to support, refute, or refine the original hypothesis
    if (strcmp(userMood, "Happy") == 0 && strstr(hypothesis, "happier") != NULL) {
        printf("Observation supports the hypothesis: People are happier on sunny days.\n");
    } else if (strcmp(userMood, "Sad") == 0 && strstr(hypothesis, "sadder") != NULL) {
        printf("Observation supports the hypothesis: People might feel sadder on rainy days.\n");
    } else {
        printf("Observation does not clearly support or refute the hypothesis.\n");
    }

    // Additional output for reference
    printf("Hypothesis: %s\n", hypothesis);
    printf("Prediction: %s\n", prediction);

    return 0;
}
