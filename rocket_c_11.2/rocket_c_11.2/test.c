//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//	printf("左旋<?>次: ");
//	scanf("%d", &n);
//	char *pstr = turn_left(str, n);
//	printf("%s\n", pstr);
//	system("pause");
//	return 0;
//}


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
//		char * pend = s2 + t - 2;//这个地方需要注意
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
//		printf("s1【是】s2字符串旋转之后的字符串\n");
//	}
//	else
//	{
//		printf("s1【不是】s2字符串旋转之后的字符串\n");
//	}
//	system("pause");
//	return 0;
//}

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

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
//			printf("【%d】出现一次！\n", *first);
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


//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
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

////3.模拟实现strcpy
//#include <stdio.h>
//#include <windows.h>
//#include <assert.h>
//
////方法一
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
//	*str = *src;//把'\0'拷贝过去
//	return dest;
//}
//
////高级版
//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest);//assert是一个宏，在debug版中有定义，但是在release版本没有此宏
//	assert(src);//所以尽量使用if判断语句实现空指针判定！！！
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
////4.模拟实现strcat
//char * my_strcat(char *dest, const char *src)
//{
//	assert(dest);//assert是一个宏，在debug版中有定义，但是在release版本没有此宏
//	assert(src);//所以尽量使用if判断语句实现空指针判定！！！
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
//	char str1[20] = "abcdefg";//有数组的时候，一定要考虑否越界的问题！！！
//	char str2[10] = "hijklmn";//'\0'
//	char *str = my_strcat(str1, str2);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}