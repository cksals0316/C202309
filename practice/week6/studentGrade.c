#include <stdio.h>
#define STUDENTS 5  // �л����� �� ����

void classifyStudents(int scores[], char targetGrade) {  // �Լ� ����
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {  // ���� ������ ���� ������ �޶����� ���ǹ�
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}




int main(){
	int scores[STUDENTS];  //������ ������ �迭 ����

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);  //�л����� ���� �Է¹ޱ�
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);
	
	classifyStudents(scores, target);  //�л����� ���� �з� �� ���

	return 0;
}