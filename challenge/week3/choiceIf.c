#include <stdio.h>

int main() {

	int choice;

	printf("1.��������\n");
	printf("2.���� ���� �ݱ�\n");
	printf("3.�����ϱ�\n");
	printf("���ϴ� ���� �Է��ϼ���\n");
	scanf_s("%d" ,&choice);  //����ڿ��� ���� �Է¿䱸

	if (choice==1) { // ���ǹ����� ����ڰ� ������ ��ȣ�� ���� ����Ʈ
		printf("������ �����մϴ�.\n");  
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.\n");
	}
	else if (choice == 3) {
		printf("�����մϴ�.\n");
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");  //����ڰ� 1~3 �ܿ� ��ȣ�� ���������� ����Ʈ
	}
	return 0;
}