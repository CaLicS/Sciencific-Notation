#include<stdio.h>
#include<windows.h>

int main(void)
{
	while(true)
	{
	double data;
	
	printf("실수를 입력하시오 :");
	scanf("%lf", &data);
	
	printf("지수형식 : %e.\n", data);
	
	system("pause");
	}
	
	return 0;
}
