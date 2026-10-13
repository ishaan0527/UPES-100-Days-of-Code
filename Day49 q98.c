#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i]))
            lastSpace = i;
    }

    for (i = 0; i <= lastSpace; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1])))
            printf("%c. ", name[i]);
    }

    printf("%s\n", name + lastSpace + 1);
    return 0;
}
