#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rolls 36000
#define combinations 11 // 2~12

int main()
{
	int dice1, dice2, total;
	int counter[combinations] = { 0 };

	srand(time(0));

	for (int i = 0; i < rolls; i++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		int sum = dice1 + dice2;
		counter[sum - 2]++;
	}

	for (int i = 2; i <= 12; i++)
	{
		printf("%2d : %d\n", i, counter[i - 2]);
	}
	
	double ExpPct = 100.0 / 6.0;
	double ActPct = (double)counter[5] / rolls * 100.0;
	printf("\nExpected percentage for 7 is %.2lf%%\n", ExpPct);
	printf("Actual   percentage for 7 is %.2lf%%\n", ActPct);

	if ((int)ExpPct / 1 == (int)ActPct / 1)
		printf("\nResonable!\n\n");
	else
		printf("unresonable!");

	system("pause");
	return 0;
}


