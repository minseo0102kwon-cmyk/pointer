2의 n승을 구하는 함수를 재귀적으로 구현해 보자. 주어진 main은 그대로 사용한다. 
#include <stdio.h> 
int twoPower(int x); 
int main(void) 
{ 
int n; 
printf("Enter a number: "); 
scanf("%d", &n); 
printf("2의 %d승은 %d이다\n", n, twoPower(n)); 
} 
int twoPower(int x) 
{ 
if (x == 0) 
/* 이곳에 적절한 return문을 넣는다. 
Else 
} 
/* 이곳에 적절한 return문을 넣는다.
