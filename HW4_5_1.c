#include <stdio.h>

int get_cycle_number(int n) {
	int count = 1;
	printf("%d ", n);
	
	while(n != 1) {
		if(n%2 == 0){
			n = n/2;
		}else{
			n = 3 * n + 1;
		}
		printf("%d ", n);
		count++;
	}
	printf("\n");
	return count;
}
int main(void) {
    int n;
 	printf("Enter n: ");
	scanf("%d", &n);
	int length = get_cycle_number(n);  
    printf("cycle length = %d\n", length);
    return 0;
}
