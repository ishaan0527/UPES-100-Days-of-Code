#include <stdio.h>

int main(void) {
    char str[1000];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];
        int vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

        if (!vowel)
            str[j++] = str[i];
        i++;
    }

    str[j] = '\0';
    printf("%s", str);
    return 0;
}
