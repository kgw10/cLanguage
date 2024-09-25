#include <stdio.h>

void input(int score[][3], int total[], int avg[]);

int main() {
    int score[5][3];
    int total[5]; 
    int avg[5];

    input(score, total, avg);

    printf("학생 성적 결과:\n");
    for (int i = 0; i < 5; i++) {
        printf("학생 %d: 총점 = %d, 평균 = %d\n", i + 1, total[i], avg[i]);
    }

}

void input(int score[][3], int total[], int avg[]) {
    for (int i = 0; i < 5; i++) {
        printf("학생 %d의 성적 입력:\n", i + 1);
        printf("국어: ");
        scanf_s("%d", &score[i][0]);
        printf("수학: ");
        scanf_s("%d", &score[i][1]);
        printf("영어: ");
        scanf_s("%d", &score[i][2]);

        total[i] = score[i][0] + score[i][1] + score[i][2];
        avg[i] = total[i] / 3;
    }
}
// 5명의 학생이 있다.
// 국어 수학 영어 3과목의 성적을 입력하고 총점과 평균을 저장하세요.
// 성적 입력 함수 - input
// (5명 학생의 과목 점수와 총점, 평균을 저장할 수 있는 배열 생성)