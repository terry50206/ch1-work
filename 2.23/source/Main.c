#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int a, b,c;
	printf("块俱计ノ筳秨:");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b)
	
	{
		if(a>c)
		printf("程:%d\n",a);
		else
		printf("程:%d\n",c);
	}
	else
	{
		if(b>c)
		printf("程:%d\n",b);
		else
		printf("程:%d\n",c);
	}
	if(a<b)
	{
		if(a<c)
		printf("程:%d\n",a);
		else
		printf("程:%d\n",c);
	}
	else
	{
		if(b<c)
		printf("程:%d\n",b);
		else
		printf("程:%d\n",c);
	}

	//system("pause");
	return 0;
}
