int sumList(int arr[], int size); 
int maxList(int arr[], int size); 
int indexSearch(int arr[], int size, int key); 
 
#include <stdio.h> 
int main(void) 
{ 
	int list[10] = {10, 20, 30, 40, 50, 40, 30, 20, 10, 0}; 
	int sum, i; 
	int value; 
	int keyIndex; 
	int found=0;
	sum = sumList(list, 10); 
	printf("합은 %d\n", sum); 
	 printf("가장 큰 수는 %d\n", maxList(list, 10)); 
	 printf("탐색할 값은? "); 
	 scanf("%d", &value); 

     for (i = 0; i < 10; i++) {
        if (list[i] == value) {
            found = 1; 
            break; 
        }
    }
    if (found == 0) {
        printf("없다\n");
    } else {
        printf("값 %d를 갖는 첫번쨰 값은 %d번째에 있습니다\n", value, i + 1);
    }
     return 0; 
}  
int sumList(int arr[], int size) 
{ 
     int i, total = 0; 
     for (i = 0; i < size; i++) 
          total += arr[i]; 
     return total; 
} 
int maxList(int arr[], int size) 
{ 
	int i;
	int max = arr[0];
	for(i = 1; i < size; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
} 
int indexSearch(int arr[], int size, int key) 
{ 
	int i;
	for(i = 0; i < size; i++){
		if(arr[i] == key) {
			return i;
		}
	}
	return -1;
}



 
