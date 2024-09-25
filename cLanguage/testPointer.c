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

// main 함수에서 1차원 배열 numbers를 생성 numbers 크기는 15
// input이라는 함수를 통해 numbers 배열에 랜덤값 저장하기 랜덤범위(1~50)
// print 함수를 통해 numbers값 출력하기