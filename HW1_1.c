#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n,i;
    int count[10] = {0};
    int numbers[100];
    printf("Enter the number of random numbers: (<= 100): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        numbers[i] = rand() % 10; 
        count[numbers[i]]++;      
    }
    for (i = 0; i < 10; i++) {
        printf("%d의 개수는 %d\n", i, count[i]);
    }
    printf("--------------------------------------------------\n");
    printf("발생된 난수는\n");
    for (i = 0; i < n; i++) {
        printf("%6d", numbers[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
