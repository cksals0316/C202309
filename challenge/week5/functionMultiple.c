#include <stdio.h>

long multiF(int value);  //�Լ�����

void main()  //�Լ�ȣ��
{
	printf("1���� 2������ ���� %d\n", multiF(2));  //1~n ���� ��
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}
long multiF(int value)  //�Լ� ����
{
	int i;
	int mul = 1;  // ���� ����

	for( i = 1; i <= value; i = i+1){  // ������ ����
		mul = mul * i;	
	}
	return mul;
}