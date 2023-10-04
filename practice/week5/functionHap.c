#include <stdio.h>

long multiF(int value);  //함수선언

void main()  //함수호출
{
	printf("1부터 2까지의 곱은 %d\n", multiF(2));  //1~n 까지 곱
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}
long multiF(int value)  //함수 정의
{
	int i;
	int mul = 1;  // 변수 선언

	for( i = 1; i <= value; i = i+1){  // 수행할 문장
		mul = mul * i;	
	}
	return mul;
}