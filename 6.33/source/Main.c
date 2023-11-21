#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key);

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	printf("Enter Key: ");
	scanf_s("%d", &key);

	int result = binarySearchRecursive(arr, 0, n - 1, key);

	if (result != -1) printf("Element found at index %d\n", result);
	else printf("Element not fund in the array\n");

	system("pause");
	return 0;
}

int binarySearchRecursive(int arr[], int low, int high, int key)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == key)
			return mid;

		if (arr[mid] > key)
			return binarySearchRecursive(arr, low, mid - 1, key);
		else
			return binarySearchRecursive(arr, mid + 1, high, key);

	}
	return -1;
}