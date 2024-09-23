#include <stdio.h>

void main() {

	int a[3]; // 10 진수 정수의 3 크기의 배열

	char word[5] = { 't', 'a', 'b', 'l', 'e' };	// 문자 5개 

	for (int i = 0; i < 5; i++) {
		printf("%c", word[i]);
	}

	word[5] = NULL;
	printf("	\n %s	\n", word + 2);

	char like[10] = { "banana" };
	printf(" %s		\n", like);
	// 문자열 입력하기 위한 방법
	char ch2 = getch();
	printf("getch 입력 : %c", ch2);
	
	char ch3 = getchar();
	printf("\n getchar 입력 : %c \n", ch3);
	putchar(ch3);	// 문자 출력 함수


	getch();	// 문자열 입력 전에 숫자나 문자 입력시
	// 버퍼에 남아있는 연료를 제거하기 위해
	// 문자열 함수
	char str[50];
	printf("\n getcgrar 입력");


	// 참 재미있다. 만 출력하고 나는 프로그래밍이라고만 출력되기 위해 수정하여 출력
	// 참고 사항 - 한글 1자는 알파벳 2자에 해당한다.

	char info[100] = { "나는 프로그래밍이 참 재미있다." };

	printf("%s \n", info + 18);
	info[15] = NULL;
	printf("%s \n", info);

	// 나의 이름과 나이, 전화번호를 입력하고 출력하기

	char name[50], age[50], phone[50];

	printf("\n이름을 입력하세요: ");
	scanf("%c", &name);


	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("전화번호를 입력하세요: ");
	scanf("%d", &age);

	printf("\n--- 입력하신 정보 ---\n");
	printf("이름: %s", name);
	printf("나이: %d\n", age);
	printf("전화번호: %s", phone);
	
}