#include <stdio.h>
int get_cycle_number(int n) {
    printf("%d ", n);
    if (n == 1) {
        printf("\n");
        return 1;
    }
    if (n % 2 == 0) {
        return 1 + get_cycle_number(n / 2);
    } else {
        return 1 + get_cycle_number(3 * n + 1);
    }
}
int main(void) {
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int length = get_cycle_number(n);
    printf("cycle length = %d\n", length);
    return 0;
}
