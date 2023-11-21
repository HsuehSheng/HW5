#include <stdio.h>
#include <stdlib.h>

void cubeByAddress(int *nPtr);

int main()
{
	int number = 5;
	printf("The original value of nnumber is %d", number);

	cubeByAddress(&number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByAddress(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}