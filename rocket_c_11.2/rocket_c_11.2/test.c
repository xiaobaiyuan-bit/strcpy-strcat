//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include <assert.h>
//#pragma warning(disable:4996)
//
//char * turn_left(char str[], int n)
//{
//	assert(str);
//  int t = n;
//	while (n)
//	{
//		char * pstr1 = str;
//		char * pend = str + t - 2;
//		char ret = *str;
//		while (pstr1 <= pend)
//		{
//			*pstr1 = *(pstr1 + 1);
//			pstr1++;
//		}
//		*pstr1 = ret;
//		n--;
//	}
//	return str;
//}
//
//int main()
//{
//	int n = 0;
//	char str[5] = "ABCD";
//	printf("%s\n", str);
//	printf("����<?>��: ");
//	scanf("%d", &n);
//	char *pstr = turn_left(str, n);
//	printf("%s\n", pstr);
//	system("pause");
//	return 0;
//}


//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//#include <stdio.h>
//#include <windows.h>
//#include <assert.h>
//#include <string.h>
//
//int str_turn_equal(char s1[], char s2[], int n)
//{
//	assert(s1);
//	assert(s2);
//	int t = n;
//	while (n)
//	{
//		char * pstr1 = s2;
//		char * pend = s2 + t - 2;//����ط���Ҫע��
//		char ret = *s2;
//		while (pstr1 <= pend)
//		{
//			*pstr1 = *(pstr1 + 1);
//			pstr1++;
//		}
//		*pstr1 = ret;
//		if (0 == strcmp(s1, s2))
//		{
//			return 1;
//		}
//		n--;
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[10] = "AABCD";
//	char s2[10] = "CDAAB";
//	int n = strlen(s2);
//	int ret = str_turn_equal(s1, s2, n);
//	if (1 == ret)
//	{
//		printf("s1���ǡ�s2�ַ�����ת֮����ַ���\n");
//	}
//	else
//	{
//		printf("s1�����ǡ�s2�ַ�����ת֮����ַ���\n");
//	}
//	system("pause");
//	return 0;
//}

//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

//#include <stdio.h>
//#include <windows.h>
//#include <assert.h>
//
//void search_once_num(int arr[], int n)
//{
//	assert(arr);
//	int t = n;
//	int *first = arr;
//	int *end = arr + t - 2;
//	while (first <= end)
//	{
//		int *second = arr;
//		while (second <= (end+1))
//		{
//			if ((first != second) && (*second == *first))
//			{
//				break;
//			}
//			second++;
//		}
//		if (second > (end+1))
//		{
//			printf("��%d������һ�Σ�\n", *first);
//		}
//		first++;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 1, 2, 5, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search_once_num(arr, sz);
//	system("pause");
//	return 0;
//}


//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//#include <stdio.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int sum = 0;
//	int SoadPop = 0;
//	printf("please Enter your money> ");
//	scanf("%d", &SoadPop);
//	sum = SoadPop;
//	while (SoadPop > 0)
//	{
//		SoadPop /= 2;
//		sum += SoadPop;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

////3.ģ��ʵ��strcpy
//#include <stdio.h>
//#include <windows.h>
//#include <assert.h>
//
////����һ
//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest);
//	assert(src);
//	char *str = dest;
//	while (*src)
//	{
//		*str = *src;
//		str++;
//		src++;
//	}
//	*str = *src;//��'\0'������ȥ
//	return dest;
//}
//
////�߼���
//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest);//assert��һ���꣬��debug�����ж��壬������release�汾û�д˺�
//	assert(src);//���Ծ���ʹ��if�ж����ʵ�ֿ�ָ���ж�������
//	char *str = dest;
//	while (*str++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	const char *str1 = "abcdefg";
//	char str2[10] = {0};//'\0'
//	char *str = my_strcpy(str2, str1);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//
////4.ģ��ʵ��strcat
//char * my_strcat(char *dest, const char *src)
//{
//	assert(dest);//assert��һ���꣬��debug�����ж��壬������release�汾û�д˺�
//	assert(src);//���Ծ���ʹ��if�ж����ʵ�ֿ�ָ���ж�������
//	char *str = dest;
//	while (*str)
//	{
//		str++;
//	}
//	while (*str++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char str1[20] = "abcdefg";//�������ʱ��һ��Ҫ���Ƿ�Խ������⣡����
//	char str2[10] = "hijklmn";//'\0'
//	char *str = my_strcat(str1, str2);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}