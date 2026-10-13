#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];
    int i, j, palindrome = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = (int)strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    printf("%s\n", palindrome ? "Palindrome" : "Not Palindrome");
    return 0;
}
