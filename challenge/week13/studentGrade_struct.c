#include <stdio.h>
#include <stdlib.h>

struct StudentInfo {
    char* name;
    int score;
};

void classifyStudents(struct StudentInfo* students, int studentnum, char targetGrade) {
    printf("학생 성적 분류:\n");
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
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
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
        printf("%s 학생의 순위는 %d 입니다.\n", students[i].name, j);
    }
}

int main() {
    int studentnum;

    printf("학생 수를 입력하세요: ");
    scanf_s("%d", &studentnum);

    struct StudentInfo* students = (struct StudentInfo*)malloc(studentnum * sizeof(struct StudentInfo));

    if (students == NULL) {
        return 1;
    }

    for (int i = 0; i < studentnum; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        students[i].name = (char*)malloc(studentnum * sizeof(char));
        scanf_s("%s", students[i].name);

        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &students[i].score);
    }

    char target;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);

    classifyStudents(students, studentnum, target);

    int sum = sumScores(students, studentnum);
    double average = averageScores(students, studentnum);
    printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다 \n", sum, average);

    printRanks(students, studentnum);

    for (int i = 0; i < studentnum; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}
