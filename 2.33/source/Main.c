#include <stdio.h>
void main()
{
	float a, b, c, d, e, f;
	printf("�@�Ѫ��`���{��:");
	scanf("%f",&a);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%f",&b);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf("%f",&c);
	printf("�@�Ѫ������O:");
	scanf("%f",&d);
	printf("�@�Ѫ��q��O:");
	scanf("%f",&e);

	f = (a*c)/b+(d+e);
	printf("�@�Ѷ}���һݭn����O:%f",&f);
	return 0;
}
