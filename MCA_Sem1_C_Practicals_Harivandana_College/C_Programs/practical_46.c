/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 46
 * Question: Write a program to read n integer number from keyboard and store them into a file All.txt. Read All.txt file, separate even and odd numbers and store them into files Even.txt and Odd.txt respectively and display contents of all the three files.
 * File Name: All.txt, Even.txt, Odd.txt
*/

#include <stdio.h>

int main() {
    FILE *fAll, *fEven, *fOdd;
    int n, num, i;

    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    fAll = fopen("All.txt", "w");
    if (fAll == NULL) {
        printf("Error opening All.txt\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(fAll, "%d\n", num);
    }
    fclose(fAll);

    fAll = fopen("All.txt", "r");
    fEven = fopen("Even.txt", "w");
    fOdd = fopen("Odd.txt", "w");

    while (fscanf(fAll, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(fEven, "%d\n", num);
        else
            fprintf(fOdd, "%d\n", num);
    }

    fclose(fAll);
    fclose(fEven);
    fclose(fOdd);

    printf("\n--- Contents of All.txt ---\n");
    fAll = fopen("All.txt", "r");
    while (fscanf(fAll, "%d", &num) != EOF) printf("%d ", num);
    fclose(fAll);

    printf("\n--- Contents of Even.txt ---\n");
    fEven = fopen("Even.txt", "r");
    while (fscanf(fEven, "%d", &num) != EOF) printf("%d ", num);
    fclose(fEven);

    printf("\n--- Contents of Odd.txt ---\n");
    fOdd = fopen("Odd.txt", "r");
    while (fscanf(fOdd, "%d", &num) != EOF) printf("%d ", num);
    fclose(fOdd);
    printf("\n");

    return 0;
}
