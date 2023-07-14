#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//模拟实现库函数strlen功能的实现
int my_strlen(const char* str)
{
	assert(str != NULL);//保证指针的有效性
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}