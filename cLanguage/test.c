#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void main() {

	char ch = 'b';	// �ƽ�Ű�ڵ�ǥ
	short s = 10;	// 10���� ����
	int i = 10; // 10���� ����
	long l = 2323;	// 10���� ����

	float f = 2.34;	// 10���� �Ǽ�
	double d = 3142.23;	// 10���� �Ǽ�

	bool b = true;

	// ���� ����
	// %d - 10���� ����
	// %c - ����
	// %f - 10���� �Ǽ�, %lf
	// %s - ���ڿ�
	// %p - �����Ͱ�
	
	// ��� - printf, �Է� - scanf
	// �Է��ϴ� ���
	//int num1, num2;

	//printf("�� ������ �Է��ϼ���");
	//// scanf_s("%d", &num1);
	//// scanf_s("%d", &num2);

	//scanf_s("%d %d", &num1, &num2);
	//printf("%d %d \n", num1, num2);

	//printf("%d %c", 10, 'a');
	//printf("�� �ǰ� �ֳ�");


	// ����, ����, ���� ���� �Է��ϰ� ����� ���Ͽ� ���

	int kor, mat, eng;
	int total, avg;
	printf("����, ����, ���� ������ �Է��ϼ��� \n");
	scanf_s("%d %d %d", &kor, &mat, &eng);

	total = kor + mat + eng;
	avg = total / 3;
	printf("���� : %d, ��� : %d", total, avg);

}