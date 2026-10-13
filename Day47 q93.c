#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[1000], str2[1000];
    int frequency[256] = {0}, i;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        frequency[(unsigned char)str1[i]]++;
        frequency[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
