#include <stdio.h>

void input(int score[][3], int total[], int avg[]);

int main() {
    int score[5][3];
    int total[5]; 
    int avg[5];

    input(score, total, avg);

    printf("�л� ���� ���:\n");
    for (int i = 0; i < 5; i++) {
        printf("�л� %d: ���� = %d, ��� = %d\n", i + 1, total[i], avg[i]);
    }

}

void input(int score[][3], int total[], int avg[]) {
    for (int i = 0; i < 5; i++) {
        printf("�л� %d�� ���� �Է�:\n", i + 1);
        printf("����: ");
        scanf_s("%d", &score[i][0]);
        printf("����: ");
        scanf_s("%d", &score[i][1]);
        printf("����: ");
        scanf_s("%d", &score[i][2]);

        total[i] = score[i][0] + score[i][1] + score[i][2];
        avg[i] = total[i] / 3;
    }
}
// 5���� �л��� �ִ�.
// ���� ���� ���� 3������ ������ �Է��ϰ� ������ ����� �����ϼ���.
// ���� �Է� �Լ� - input
// (5�� �л��� ���� ������ ����, ����� ������ �� �ִ� �迭 ����)