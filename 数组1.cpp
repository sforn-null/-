#include<stdio.h>
#include<string.h>
int main()
{
	//����һ������������-10�� 
	int arr[10] = { 1,2.3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
	char arr2[5] = { 'a','b' };
	char arr3[5] = "ab"; //�洢��a b \0 
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr4));
	//[]��Ҫд���� 
	return 0;
}
//1.strien��sizeofûʲô����
//2.strlen �����ַ������ȵ�--ֻ������ַ����󳤶�--�⺯��--ʹ�õ���ͷ�ļ�
//3.sizeof �Ǽ�����������飬���͵Ĵ�С--��λ���ֽ�--������ 
