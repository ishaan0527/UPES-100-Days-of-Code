#include <stdio.h>

int main(void) {
    char str[1000];
    int i = 0, start = 0, maxStart = 0, length = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0' || str[i] == '\t') {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }
            length = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            if (length == 0)
                start = i;
            length++;
        }
        i++;
    }

    for (i = maxStart; i < maxStart + maxLength; i++)
        putchar(str[i]);

    putchar('\n');
    return 0;
}
