#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] ={1,2,3,4,5,6,7};
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr);//��Ȼ��ַһ������ʵȡ����������ĵ�ַ 
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//1.sizeof���������� ��������ʾ�������飬sizeof���������� ���������������Ĵ�С����λ���ֽ�
	//2.&����������������������������飬&��������ȥ��������������ĵ�ַ 
	return 0;
}