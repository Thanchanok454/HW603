#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, a, b;
	printf("INPUT THE NUMBER : ");
	scanf("%d", &num);
	for (a = 0; a < num; a++)
	{
		for (b = 0; b < num - a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}