#include <stdio.h>
#include <stdlib.h>

struct StudentInfo {
    char* name;
    int score;
};

void classifyStudents(struct StudentInfo* students, int studentnum, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < studentnum; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
        }
    }
}

int sumScores(struct StudentInfo* students, int studentnum) {
    int sum = 0;
    for (int i = 0; i < studentnum; i++) {
        sum += students[i].score;
    }
    return sum;
}

double averageScores(struct StudentInfo* students, int studentnum) {
    int sum = sumScores(students, studentnum);
    double average = (double)sum / (double)studentnum;
    return average;
}

void printRanks(struct StudentInfo* students, int studentnum) {
    for (int i = 0; i < studentnum; i++) {
        int j = studentnum;
        for (int k = 0; k < studentnum; k++) {
            if (students[i].score > students[k].score) {
                j--;
            }
        }
        printf("%s �л��� ������ %d �Դϴ�.\n", students[i].name, j);
    }
}

int main() {
    int studentnum;

    printf("�л� ���� �Է��ϼ���: ");
    scanf_s("%d", &studentnum);

    struct StudentInfo* students = (struct StudentInfo*)malloc(studentnum * sizeof(struct StudentInfo));

    if (students == NULL) {
        return 1;
    }

    for (int i = 0; i < studentnum; i++) {
        printf("�л� %d�� �̸��� �Է��ϼ���: ", i + 1);
        students[i].name = (char*)malloc(studentnum * sizeof(char));
        scanf_s("%s", students[i].name);

        printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &students[i].score);
    }

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target);

    classifyStudents(students, studentnum, target);

    int sum = sumScores(students, studentnum);
    double average = averageScores(students, studentnum);
    printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ� \n", sum, average);

    printRanks(students, studentnum);

    for (int i = 0; i < studentnum; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}
