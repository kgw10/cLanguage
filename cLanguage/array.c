#include <stdio.h>

#define size 3

void main() {

	//int[] arr = new int[5];	-	�ڹ� �迭
	// final int size = 10;	-	�ڹ� �迭

	int arr[5] = { 1, 2, 3, 4, 5 };

	/*int a[3];
	a = { 10, 20, 30 };*/

	int arr2[] = { 11, 22, 33, 44 };

	// const int size = 3;
	// constexpr int a = 10; c++ ���� 11 �̻�
	// int arr[size];	// �迭�� ũ��� �����
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

	// ��� ��ذ� 10 �ڽ��� �ִ�.
	// �� ���� �ȿ� ����ִ� ��� �����̴�.
	// ���� 50�� �̻� ��� �ڽ��� �� ��° �ڽ����� ���


	printf("\n50�� �̻��� ����� ��� �ִ� �ڽ� ��ȣ: \n");
	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		if (apple[i] >= 50) {
			printf("%d��° �ڽ��� %d���� ����� �ֽ��ϴ�.\n", i + 1, apple[i]);
		}
	}

	int grape[5];
	// ���� 5 ���̰� �ִ�.
	// �� ���̿� ������ �� �� �޷� �ִ��� �Է��Ͽ� grape �迭�� �����ϰ� ��ü ����ϼ���
}