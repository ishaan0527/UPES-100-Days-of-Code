#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000], temp;
    int i, j;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = (int)strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", str);
    return 0;
}
