#include <stdio.h>

int main(void) {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("%s", str);
    return 0;
}
