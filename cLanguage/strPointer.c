#include <stdio.h>

void main() {
	
	char name[10] = { "ȫ�浿" };

	gets_s(name, 10);	// Ű����

	printf("%s \n", name);
	printf("%s \n", "�̼���");

	char* pstr = "i like banana";
	printf("%s \n", pstr);

	char names[4][10] = { "�̼���", "�庸��", "�念��", "������" };

	char* p = names;
	printf("%s \n", p);
}