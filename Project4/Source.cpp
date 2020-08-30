#include<stdio.h>
int main()
{
	int dcn, bn, i = 0;
	int array_a[128];

	printf("Enter Decimal number : ");
	scanf("%d", &dcn);

	while (dcn != 0)
	{
		bn = dcn % 2;
		array_a[i] = bn;
		dcn = dcn / 2;
		i++;
	}

	printf("Binary : ");

	for (int j = i - 1; j > 0; j--)
	{
		printf("%d", array_a[j]);
	}
}