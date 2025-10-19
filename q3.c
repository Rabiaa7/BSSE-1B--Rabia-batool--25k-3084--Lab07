#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i, n = 10;
    int passCount = 0, failCount = 0;
    float passSum = 0, failSum = 0;
    int marks;

    printf("Enter marks for up to %d students (-1 to stop):\n", n);

    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1) {
            break;
        } else if (marks >= 5 && marks <= 10) {
            pass[passCount] = marks;
            passSum += marks;
            passCount++;
        } else if (marks >= 0 && marks < 5) {
            fail[failCount] = marks;
            failSum += marks;
            failCount++;
        } else {
            printf("Invalid input! Please enter marks between 0 and 10.\n");
            i--;
        }
    }

    printf("\nMarks of passing students:\n");
    for (i = 0; i < passCount; i++) {
        printf("%d ", pass[i]);
    }
    if (passCount > 0)
        printf("\nAverage (Pass) = %.2f\n", passSum / passCount);
    else
        printf("\nNo passing marks entered.\n");

    printf("\nMarks of failed students:\n");
    for (i = 0; i < failCount; i++) {
        printf("%d ", fail[i]);
    }
    if (failCount > 0)
        printf("\nAverage (Fail) = %.2f\n", failSum / failCount);
    else
        printf("\nNo failing marks entered.\n");

    return 0;
}
