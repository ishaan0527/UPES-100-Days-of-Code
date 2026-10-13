#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    int i = 0, start = 0, j;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (j = i - 1; j >= start; j--)
                putchar(str[j]);

            if (str[i] == '\0')
                break;

            putchar(' ');
            start = i + 1;
        }
        i++;
    }

    putchar('\n');
    return 0;
}
