#include <stdio.h>

void main() {
	
	char name[10] = { "홍길동" };

	gets_s(name, 10);	// 키보드

	printf("%s \n", name);
	printf("%s \n", "이순신");

	char* pstr = "i like banana";
	printf("%s \n", pstr);

	char names[4][10] = { "이순신", "장보고", "장영실", "김유신" };

	char* p = names;
	printf("%s \n", p);
}