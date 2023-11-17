#include<stdio.h>
#include<ctype.h>
int HasUpper(const char* _String) {
	do {
		if (isupper(*_String))return 1;
	} while (*_String++ >= '0');
	return 0;

}
int main()
{
	char Input[256];
	char* Read = Input;
	printf("charを入力してください\n");
	fgets(Input, 256, stdin);
	if (HasUpper(Input))
		printf("大文字が含まれています。\n");
	else
		printf("大文字が含まれていません。\n");
	fgets(Input, 256, stdin);
	return 0;

}
