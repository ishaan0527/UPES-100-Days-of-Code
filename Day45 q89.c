#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000], ch;
    int count = 0, i;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
