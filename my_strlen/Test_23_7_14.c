#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//ģ��ʵ�ֿ⺯��strlen���ܵ�ʵ��
int my_strlen(const char* str)
{
	assert(str != NULL);//��ָ֤�����Ч��
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