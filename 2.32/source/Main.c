#include <stdio.h>
int main()
{
	double h,w,BMI;

	printf("身高幾公分:");
	scanf("%lf", &h);

	printf("體重多重(kg):");
	scanf("%lf",&w);

	BMI = w/((h/100)*(h/100));
	printf("你的BMI為: %lf\n",BMI);

	if (BMI<18.5)
	{
		printf("過輕\n");
	}
	if (BMI>=18.5&&BMI<24)
	{
		printf("普通\n");
	}
	if (BMI>=24&&BMI<27)
	{
		printf("過胖\n");
	}
	if (BMI>=27&&BMI<30)
	{
		printf("輕度肥胖\n");
	}
	if (BMI>=30&&BMI<35)
	{
		printf("中度肥胖\n");
	}
	if (BMI>35)
	{
		printf("重度肥胖\n");
	}

	return 0;
}
