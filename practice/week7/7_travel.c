#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);  //����ڷκ��� ���� �̸� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);  // ����ڷκ��� ��� �̸� �ޱ�
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays(names);  //�Լ�ȣ��

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];  

	for (int i = 0; i < NUMCITY; i++) {  // �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
 
	for (int i = 0; i < NUMCITY; i++) {  //�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
		
	}

}

    


