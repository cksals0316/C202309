#include <stdio.h>

int main()
{
	int floor;  //floor ���� ����
	printf("�� ���� �װڽ��ϱ�? (5~100)");  // ������ ������ ���� ��� (���� ����)
	scanf_s("%d", &floor);  // ����ڿ��� ������ ������ �� ����

	for (int i = 0; i < floor; i++) {  // 
		for (int j = 0; j < floor - 1 - i; j++) {  // fllor�� -1-i ��ŭ ���
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {  // i *2+1 ��ŭ *�� ���
			printf("*");
		}
		printf("\n");  // �ٹٲ��� ���� �Ƕ�̵带 ����
	}
	return 0;	
}