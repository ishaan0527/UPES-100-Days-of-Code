#include <stdio.h>
int main(void) {
    int n, i;
    long long prefix = 1, suffix = 1;
    scanf("%d", &n);
    int nums[n], answer[n];
    for (i = 0; i < n; i++) scanf("%d", &nums[i]);
    for (i = 0; i < n; i++) { answer[i] = (int)prefix; prefix *= nums[i]; }
    for (i = n - 1; i >= 0; i--) { answer[i] = (int)(answer[i] * suffix); suffix *= nums[i]; }
    for (i = 0; i < n; i++) { if (i) printf(" "); printf("%d", answer[i]); }
    printf("\n");
    return 0;
}
