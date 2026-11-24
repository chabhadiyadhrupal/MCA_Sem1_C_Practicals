/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 19
 * Question: Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50,
 */

#include <stdio.h>

int main() {
    float height, weight;
    int count = 0, i;

    printf("Enter height (in cm) and weight (in kg) of 5 persons:\n");
    for (i = 1; i <= 5; i++) {
        printf("Person %d - Height (cm): ", i);
        scanf("%f", &height);
        printf("Person %d - Weight (kg): ", i);
        scanf("%f", &weight);

        if (height > 170.0 && weight < 50.0) {
            count++;
        }
    }

    printf("\nNumber of persons with Height > 170 cm and Weight < 50 kg: %d\n", count);

    return 0;
}
