#include <stdio.h>

int main(void) {
    int day, month, year;

    if (scanf("%d/%d/%d", &day, &month, &year) != 3)
        return 0;

    if (month == 4)
        printf("%02d-Apr-%04d\n", day, year);
    else
        printf("%02d-%02d-%04d\n", day, month, year);

    return 0;
}
