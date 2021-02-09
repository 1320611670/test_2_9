#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	/*int a = 3;
	int b = 5;
	 a = a ^ b;
	 b = a ^ b;
	 a = a ^ b;
	 return 0;*/

	/*int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n",count);
	return 0;*/

	/*int num = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i < 32; i++) 
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;*/

	int a = 0;
	// 按(2进制)位取反
	// 00000000000000000000000000000000
	// 11111111111111111111111111111111 - 补码
	// 11111111111111111111111111111110 - 反码
	// 10000000000000000000000000000001 - 原码
	printf("%d\n", ~a);
	return 0;



}