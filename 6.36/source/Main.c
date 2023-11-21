#include <stdio.h>

void stringReverse(char str[]);

int main()
{
	char string[20];
	scanf_s("%s", string,20);
	stringReverse(string);

	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char str[])
{
	if (str[0] == '\0') return;
	else
	{
		stringReverse(str + 1);
		printf("%c", str[0]);
	}
}


