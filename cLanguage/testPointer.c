#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void input(int numbers[]) {
	for (int i = 0; i < 15; i++) {
		numbers[i] = (rand() % 50) + 1;
	}
}

void print(int numbers[]) {
	for (int i = 0; i < 15; i++) {
		printf("%d \n", numbers[i]);
	}
}

// testPointer.c
void main() {

	int numbers[15];
	srand(time(NULL));
	input(numbers);
	print(numbers);

}

// main �Լ����� 1���� �迭 numbers�� ���� numbers ũ��� 15
// input�̶�� �Լ��� ���� numbers �迭�� ������ �����ϱ� ��������(1~50)
// print �Լ��� ���� numbers�� ����ϱ�