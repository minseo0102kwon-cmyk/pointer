#include <stdio.h>
int main(void) {
    int coins[4] = {500, 100, 50, 10};
    int change;                          
    int count[4] = {0, 0, 0, 0};        
    int i;

    printf("Enter the amount of change: \n");
    scanf("%d", &change);
    for(i=0; i<4; i++){
    	count[i] = change/coins[i];
    	change=change%coins[i];
	}
	 for (i = 0; i < 4; i++) {
        printf("%d¿øÂ¥¸®: %d \n", coins[i], count[i]);
    }

    return 0;
}

