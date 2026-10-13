#include <stdio.h>

int main(void) {
    char str[1000];
    int frequency[26] = {0}, i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (frequency[index] == 1) {
                printf("%c\n", str[i]);
                return 0;
            }
            frequency[index]++;
        }
    }

    printf("-1\n");
    return 0;
}
