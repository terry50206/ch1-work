#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a, b,c;
	printf("��J�T�Ӿ�ƨåΪŮ�j�}:");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b)
	
	{
		if(a>c)
		printf("�̤j�Ȭ�:%d\n",a);
		else
		printf("�̤j�Ȭ�:%d\n",c);
	}
	else
	{
		if(b>c)
		printf("�̤j�Ȭ�:%d\n",b);
		else
		printf("�̤j�Ȭ�:%d\n",c);
	}
	if(a<b)
	{
		if(a<c)
		printf("�̤p�Ȭ�:%d\n",a);
		else
		printf("�̤p�Ȭ�:%d\n",c);
	}
	else
	{
		if(b<c)
		printf("�̤p�Ȭ�:%d\n",b);
		else
		printf("�̤p�Ȭ�:%d\n",c);
	}

	//system("pause");
	return 0;
}
