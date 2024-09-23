#include <stdio.h>

#define size 3

void main() {

	//int[] arr = new int[5];	-	자바 배열
	// final int size = 10;	-	자바 배열

	int arr[5] = { 1, 2, 3, 4, 5 };

	/*int a[3];
	a = { 10, 20, 30 };*/

	int arr2[] = { 11, 22, 33, 44 };

	// const int size = 3;
	// constexpr int a = 10; c++ 버전 11 이상
	// int arr[size];	// 배열의 크기는 상수로
	int arr3[size];

	// int number[10] = { 0 };

	int number[10];
	memset(number, 0, 10 * sizeof(int));

	printf("%d", number[2]);

	number[0] = 10;
	number[0] = 20;
	number[0] = 30;
	number[0] = 40;
	number[0] = 50;

	printf("%d \n", number[4]);


	for (int i = 0; i < sizeof(number) / sizeof(int); i++) {
		printf("%d \n", number[i]);
	}

	int apple[10] = { 45, 34, 67, 23, 12, 69, 51, 89, 99, 28 };

	// 사과 사앚가 10 박스가 있다.
	// 각 버스 안에 들어있는 사과 갯수이다.
	// 이중 50개 이상 사과 박스는 몇 번째 박스인지 출력


	printf("\n50개 이상의 사과가 들어 있는 박스 번호: \n");
	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		if (apple[i] >= 50) {
			printf("%d번째 박스에 %d개의 사과가 있습니다.\n", i + 1, apple[i]);
		}
	}

	int grape[5];
	// 포도 5 송이가 있다.
	// 한 송이에 포도가 몇 알 달려 있는지 입력하여 grape 배열에 저장하고 전체 출력하세요
}