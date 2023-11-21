#include <stdio.h>

int recursiveMaximum(int arr[], int size);

int main()
{
	int arr[] = { 5,8,9,4,7,1,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int max = recursiveMaximum(arr, size);

	printf("The maximum element in the array is:%d\n", max);

	system("pause");
	return 0;
}

int recursiveMaximum(int arr[], int size)
{
	if (size == 1) return arr[0];
	else
	{
		int i = recursiveMaximum(arr + 1, size - 1);
		return(arr[0] > i ? arr[0] : i);
	}
}