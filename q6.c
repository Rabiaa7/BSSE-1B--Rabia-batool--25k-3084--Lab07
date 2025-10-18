#include <stdio.h>

int main() {
    char str[100];
    int v=0,c=0;

    printf("enter a word: ");
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++)
 {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            if (str[i]=='A'|| str[i]=='a'|| str[i]=='E'|| str[i]=='e'||
                str[i]=='I'|| str[i]=='i'|| str[i]=='O'|| str[i]=='o'||
                str[i]=='U'|| str[i]=='u') {
                v++;
                } else {
                    c++;
                }
        }

    }
    printf("number of vowels is: %d \n",v);
    printf("number of consonants is: %d \n",c);
    return 0;
}