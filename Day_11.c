/* Q21 - Display month name and number of days using switch-case */
#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January - 31 days"); break;
        case 2: printf("February - 28 days"); break;
        case 3: printf("March - 31 days"); break;
        case 4: printf("April - 30 days"); break;
        case 5: printf("May - 31 days"); break;
        case 6: printf("June - 30 days"); break;
        case 7: printf("July - 31 days"); break;
        case 8: printf("August - 31 days"); break;
        case 9: printf("September - 30 days"); break;
        case 10: printf("October - 31 days"); break;
        case 11: printf("November - 30 days"); break;
        case 12: printf("December - 31 days"); break;
        default: printf("Invalid month");
    }

    return 0;
}



/* Q22 - Find profit or loss percentage */
#include <stdio.h>

int main() {
    float cp, sp, percentage;
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", percentage);
    } else if (sp < cp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", percentage);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}

