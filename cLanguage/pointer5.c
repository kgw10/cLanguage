#include <stdio.h>


int** init() {

	int a[3] = { 11,22,33 };
	int b[5] = { 50,40,88,99,81 };

	int* p[2] = { a, b };

	return p;
}

void main() {

	int** p = init();

	printf(" %d %d \n", p[0][1], p[1][3]);	// 22와 99 출력

	printf("%d \n", *(p[1] + 1));

	int* pa[5];
	int num = 10;
	pa[0] = &num;
	int arr[3] = { 10,20,30 };
	pa[1] = arr;

	printf("%d \n", *pa[0]);
	printf("%d \n", pa[1][2]);	// *(pa[1]+2)

	int arr2[10] = { 10,500,431,5489 };
	pa[2] = arr2;
}

// 포인터 배열 : 포인터 변수가 연속적으로 되어 있는 메모리 공간
