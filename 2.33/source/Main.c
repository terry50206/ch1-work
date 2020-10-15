#include <stdio.h>
void main()
{
	float a, b, c, d, e, f;
	printf("一天的總里程數:");
	scanf("%f",&a);
	printf("汽油一公升/加侖多少錢:");
	scanf("%f",&b);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf("%f",&c);
	printf("一天的停車費:");
	scanf("%f",&d);
	printf("一天的通行費:");
	scanf("%f",&e);

	f = (a*c)/b+(d+e);
	printf("一天開車所需要的花費:%f",&f);
	return 0;
}
