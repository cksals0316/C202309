#include <stdio.h>

int main()
{
	int i = 0;  //����
	while (i < 10){
		if (i % 2 == 0) {
			i++;  //i�� 2�϶� �ٽ� ó������ ���ư��� i++��ŭ ���ϰ� ���������ν� 2�� ���� �ʰ� ����                                 
			continue;
		}
		printf("%d Hello World!\n", i++);
	
	}
	return 0;
}