#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");  // ����ڿ��� �Է°�
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {  // i �� 0���� ũ�ٴ� ������ ���������� i�� 1�� ����
		for (int j = 0; j < floor - i; j++) {  // fllor - i ��ŭ Ŀ����
			printf("S");
		}
		for (int k = 0; k < i * 2 - 1; k++) {  // i*2-1 ��ŭ Ŀ����.
			printf("*");
		}
		printf("\n");  // �ٹٲ�

	}
	return 0;
}