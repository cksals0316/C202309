#include <stdio.h>

int main() {
	int i = 0;  //����
	do {
		i++;  //i���� ����
		printf(" %d Hello World!\n", i++); 
		if (i % 2 == 0) {
			continue;
		}
	} while (i < 10);  //�Ϲ� while ���� �ٸ��� do�� �����ϰ� ��
	return 0;
}

