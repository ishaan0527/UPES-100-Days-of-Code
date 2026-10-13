#include <stdio.h>

int main(void) {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
        i++;
    }

    printf("%s", str);
    return 0;
}
