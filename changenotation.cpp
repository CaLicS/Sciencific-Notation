#include<stdio.h>
#include<windows.h>

int main(void)
{
	while(true)
	{
	double data;
	
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf", &data);
	
	printf("�������� : %e.\n", data);
	
	system("pause");
	}
	
	return 0;
}
