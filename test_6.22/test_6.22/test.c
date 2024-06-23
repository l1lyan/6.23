#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void PRINT(int num)
//{
//	if (num > 10)
//		PRINT(num / 10);
//	printf("%d\n", num % 10);
//}
//int main()
//{
//	int num = 123;
//	PRINT(num);
//	return 0;
//}

//int main()
//{
//	int n = 4;
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int FAC(int n)
//{
//	if (n != 1)
//		return n * FAC(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 5;
//	int ret = FAC(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void MY_STRLEN(char *arr)
//{
//	int count = 0;
//	while ((*arr) != '\0')
//	{
//		count++;
//		arr++;
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	MY_STRLEN(arr);
//	return 0;
//}

//int MY_STRLEN(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + MY_STRLEN(arr + 1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = MY_STRLEN(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//void reverse_string(char* string, int sz)
//{
//	int left = 0;
//	int right = sz - 1;                                                           
//	while (left < right)
//	{              
//		char tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char string[] = "abcdefg";
//	int sz = strlen(string);
//	reverse_string(string,sz);//abcdefg;gfedcba
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%c", string[i]);
//	//}
//	printf("%s", string);
//	return 0;
//}

//#include<string.h>
//void reverse_string(char *string)
//{
//	char tmp = *string;
//	int len = strlen(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
//int main()
//{
//	char string[] = "abcdefg";
//	reverse_string(string);
//	printf("%s", string);
//	return 0;
//}

//int DigitSum(int num)
//{
//	if (num > 10)
//		return DigitSum(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

//double cifang(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * cifang(n, k - 1);
//	}
//	else if (k < 0)
//		return 1.0 / cifang(n, - k);
//	else
//		return 1.0;
//}
//int main()
//{
//	int n = 2;
//	int k = -1;
//	double ret = cifang(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//int FIB(n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return FIB(n - 1) + FIB(n - 2);
//}
//int main()
//{
//	int n = 10;//1 1 2 3 5 8 13 21 34 55 89
//	int ret = FIB(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int FIB(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 10;//1 1 2 3 5 8 13 21 34 55 89
//	int ret = FIB(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (i = 0; i < sz - 1-i; i++)
//		{
//			if (arr[i] > arr[i + 1])//9,8,7,6,5,4,3,2,1,0;8,9,7,6,5,4,3,2,1
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void init(int* arr,int sz)
//{	
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	print(arr,sz);
//
//	reverse(arr,sz);
//	print(arr,sz);
//	return 0;
//}

//void TRAP(int* arr, int* brr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int brr[] = { 5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	TRAP(arr, brr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	return 0;
//}

