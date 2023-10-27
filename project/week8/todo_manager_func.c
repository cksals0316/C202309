#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define CHAR_NUM 100


void addTask(char tasks[MAX_TASKS][CHAR_NUM], int* taskCount);
void delTask(char tasks[MAX_TASKS][CHAR_NUM], int* taskCount, int delIndex);
void printTask(char tasks[MAX_TASKS][CHAR_NUM], int taskCount);

int main() {
    char tasks[MAX_TASKS][CHAR_NUM] = { "" };  // ����ڷκ��� ���� ���� ��� ����
    int taskCount = 0;  // ������ ���� �����ϴ� ����

    printf("TODO ����Ʈ ����!\n");

    while (1) {
        int choice = -1;  // ����� �Է� �޴��� �����ϱ� ���� ����

        if (taskCount >= MAX_TASKS) {  // ������ ������ �ִ�ġ���� ũ�ų� ������ ����
            printf("�� ���� �� á���ϴ�.");
            break;
        }

        printf("------------------\n");  // ����ڿ��� �޴��� ���, ����ڿ��� �Է°� �ޱ�
        printf("�޴��� �Է����ּ���.\n");
        printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
        printf("���� �� �� �� = %d\n", taskCount);
        printf("------------------\n");
        scanf_s("%d", &choice);

        int terminate = 0;
        int delIndex = -1;
        int changeIndex = -1;
        char ch;
        // �Է¿� ���� ��� ����
        switch (choice) {
        case 1:  // �� �� �߰�
            addTask(tasks, &taskCount);
            break;
        case 2:   // �� �� ����
            printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
            scanf_s("%d", &delIndex);
            delTask(tasks, &taskCount, delIndex);
            break; 
        case 3:  //�� �� ���
            printTask(tasks, taskCount);
            break;
        case 4:  // ����
            terminate = 1;
            break;
        case 5:  //�� �� ����
            printf("������ �� ���� ��ȣ�� �Է����ּ��� (1���� ����): ");
            scanf_s("%d", &changeIndex);
            if (changeIndex > taskCount || changeIndex <= 0) {
                printf("���� ������ ������ϴ�.\n");
            }
            else {
                printf("���� ����: %s\n", tasks[changeIndex - 1]);
                printf("���ο� �� �� ������ �Է��ϼ��� (���� ���� �Է��ϼ���): ");
                scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
                printf("%d. �� ���� �����Ǿ����ϴ�: %s\n", changeIndex, tasks[changeIndex - 1]);
            }
            break;
        default:   // 1~5 �̿��� ���� ����ڰ� �Է������� 
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }

        if (terminate == 1) {
            printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }
    }

    return 0;
}
// ���� �߰� �Լ�
void addTask(char tasks[MAX_TASKS][CHAR_NUM], int* taskCount) {
    if (*taskCount < MAX_TASKS) {
        printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
        scanf_s("%s", tasks[*taskCount], (int)sizeof(tasks[*taskCount]));
        printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[*taskCount]);
        (*taskCount)++;
    }
    else {
        printf("�� �� ����� �� á���ϴ�. �� �̻� �� ���� �߰��� �� �����ϴ�.\n");
    }
}
// ���� ���� �Լ�
void delTask(char tasks[MAX_TASKS][CHAR_NUM], int* taskCount, int delIndex) {
    if (delIndex > *taskCount || delIndex <= 0) {
        printf("���� ������ ������ϴ�.\n");
    }
    else {
        printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

        strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

        for (int i = delIndex; i < *taskCount; i++) {
            strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
        }
        (*taskCount)--;
    }
}

// ���� ��� �߰� �Լ�
void printTask(char tasks[MAX_TASKS][CHAR_NUM], int taskCount) {
    printf("�� �� ���\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
    printf("\n");
}
