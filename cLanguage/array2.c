#include <stdio.h>

void main() {

	int a[3]; // 10 ���� ������ 3 ũ���� �迭

	char word[5] = { 't', 'a', 'b', 'l', 'e' };	// ���� 5�� 

	for (int i = 0; i < 5; i++) {
		printf("%c", word[i]);
	}

	word[5] = NULL;
	printf("	\n %s	\n", word + 2);

	char like[10] = { "banana" };
	printf(" %s		\n", like);
	// ���ڿ� �Է��ϱ� ���� ���
	char ch2 = getch();
	printf("getch �Է� : %c", ch2);
	
	char ch3 = getchar();
	printf("\n getchar �Է� : %c \n", ch3);
	putchar(ch3);	// ���� ��� �Լ�


	getch();	// ���ڿ� �Է� ���� ���ڳ� ���� �Է½�
	// ���ۿ� �����ִ� ���Ḧ �����ϱ� ����
	// ���ڿ� �Լ�
	char str[50];
	printf("\n getcgrar �Է�");


	// �� ����ִ�. �� ����ϰ� ���� ���α׷����̶�� ��µǱ� ���� �����Ͽ� ���
	// ���� ���� - �ѱ� 1�ڴ� ���ĺ� 2�ڿ� �ش��Ѵ�.

	char info[100] = { "���� ���α׷����� �� ����ִ�." };

	printf("%s \n", info + 18);
	info[15] = NULL;
	printf("%s \n", info);

	// ���� �̸��� ����, ��ȭ��ȣ�� �Է��ϰ� ����ϱ�

	char name[50], age[50], phone[50];

	printf("\n�̸��� �Է��ϼ���: ");
	scanf("%c", &name);


	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	printf("��ȭ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &age);

	printf("\n--- �Է��Ͻ� ���� ---\n");
	printf("�̸�: %s", name);
	printf("����: %d\n", age);
	printf("��ȭ��ȣ: %s", phone);
	
}