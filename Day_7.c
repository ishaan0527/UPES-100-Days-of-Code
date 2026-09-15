/* Q13 - Check whether a year is a leap year */
#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}



/* Q14 - Check whether a character is a vowel or consonant */
#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

