#include <stdio.h>

int main(void) {
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
