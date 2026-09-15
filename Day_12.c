/* Q23 - Calculate library fine based on late days */
#include <stdio.h>

int main() {
    int days, fine = 0;

    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs.%d", fine);
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = Rs.%d", fine);
    } else if (days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = Rs.%d", fine);
    } else {
        printf("Membership Cancelled");
    }

    return 0;
}



/* Q24 - Calculate electricity bill based on units consumed */
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else if (units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if (units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

    printf("Bill = Rs.%.2f", bill);

    return 0;
}

