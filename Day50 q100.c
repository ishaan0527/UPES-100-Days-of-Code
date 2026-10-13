#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    int i, j, k, length;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    length = (int)strlen(str);

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (k = i; k <= j; k++)
                putchar(str[k]);
            putchar('\n');
        }
    }

    return 0;
}
