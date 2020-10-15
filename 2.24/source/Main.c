#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	a = a % 2;

	if (a == 0)
		printf("even");
	if (a != 0)
		printf("odd");

	return 0;
}
