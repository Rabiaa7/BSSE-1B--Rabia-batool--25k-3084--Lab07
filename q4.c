#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // to lowercase
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // to uppercase
        }
    }

    printf("Converted message: %s", str);

    return 0;
}
