#include <stdio.h>
int main()
{
	double h,w,BMI;

	printf("�����X����:");
	scanf("%lf", &h);

	printf("�魫�h��(kg):");
	scanf("%lf",&w);

	BMI = w/((h/100)*(h/100));
	printf("�A��BMI��: %lf\n",BMI);

	if (BMI<18.5)
	{
		printf("�L��\n");
	}
	if (BMI>=18.5&&BMI<24)
	{
		printf("���q\n");
	}
	if (BMI>=24&&BMI<27)
	{
		printf("�L�D\n");
	}
	if (BMI>=27&&BMI<30)
	{
		printf("���תέD\n");
	}
	if (BMI>=30&&BMI<35)
	{
		printf("���תέD\n");
	}
	if (BMI>35)
	{
		printf("���תέD\n");
	}

	return 0;
}
