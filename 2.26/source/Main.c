#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;
	printf("��J�Ĥ@�Ӽ�:");
	scanf("%d", x);

	while (x == 0)
	{
		printf("�Э��s��J!\n");
		
			if (x != 0)break;
	}
	printf("��J�ĤG�Ӽ�:\n");
	scanf("%d", y);
		if (y%x == 0)
			printf("%d�O%d������\n", y, x);
		else
			printf("%d���O%d������\n", y, x);
	
		return 0;
}
