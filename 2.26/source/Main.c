#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;
	printf("輸入第一個數:");
	scanf("%d", x);

	while (x == 0)
	{
		printf("請重新輸入!\n");
		
			if (x != 0)break;
	}
	printf("輸入第二個數:\n");
	scanf("%d", y);
		if (y%x == 0)
			printf("%d是%d的倍數\n", y, x);
		else
			printf("%d不是%d的倍數\n", y, x);
	
		return 0;
}
