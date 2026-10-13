#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    int i;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1])))
            putchar(name[i]);
    }

    putchar('\n');
    return 0;
}
