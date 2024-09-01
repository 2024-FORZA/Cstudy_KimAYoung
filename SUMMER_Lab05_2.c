#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

typedef struct {
    char name[101];
    int score1;
    int score2;
    int score3;
} Student;

Student students[MAX];

int cmp(const void *a, const void *b) {
    Student *studentA = (Student *)a;
    Student *studentB = (Student *)b;

    if (studentA->score1 > studentB->score1)
        return -1;
    else if (studentA->score1 == studentB->score1) {
        if (studentA->score2 < studentB->score2)
            return -1;
        else if (studentA->score2 == studentB->score2) {
            if (studentA->score3 > studentB->score3)
                return -1;
            else if (studentA->score3 == studentB->score3)
                return strcmp(studentA->name, studentB->name);
        }
    }
    return 1;
}

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].score1, &students[i].score2, &students[i].score3);
    }

    qsort(students, N, sizeof(Student), cmp);

    for (int i = 0; i < N; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}
