//实现函数init() 初始化数组全为0
//实现print() 打印数组的每个元素
//实现reverse() 函数完成数组的逆置

#include <stdio.h>
#include <string.h>
//初始化
//void init(int *array, int lenth)
//{
//	int i = 0;
//	for (i = 0; i < lenth; i++)
//	{
//		*(array + i) = 0;
//	}
//}
//打印
//void print(int* array, int lenth)
//{
//	int i = 0;
//	for (i = 0; i < lenth; i++)
//	{
//		printf("%d ", *(array + i));
//	}
//  printf("\n");
//}
//常规做法
//void reverse(int* array, int lenth)
//{
//	int tmp = 0;
//	int i = 0;
//	while (i <= lenth / 2)
//	{
//		tmp = *(array + i);
//		*(array + i) = *(array + lenth - i - 1);
//		*(array + lenth - i - 1) = tmp;
//		i++;
//	}
//}

//递归做法
//void reverse(int* array, int lenth)
//{
//	int tmp = *array;
//	*array = *(array + lenth - 1);
//	*(array + lenth - 1) = tmp;
//	if(lenth > 1)
//	reverse(array + 1, lenth - 2);
//}
//int main()
//{
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int lenth = sizeof(array) / sizeof(array[0]);
//	print(array, lenth);
//    reverse(array, lenth);
//	print(array, lenth);
//	init(array, lenth);
//	print(array, lenth);
//	return 0;
//}


//int mystrlen(char* arry)
//{
//	if (*arry != '\0')
//		return 1 + mystrlen(arry + 1);
//}
//
//void swap(char* arry1, char* arry2)
//{
//	int sz = mystrlen(arry1);
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = *(arry1 + i);
//		*(arry1 + i) = *(arry2 + i);
//		*(arry2 + i) = tmp;
//	}
//}
//int main()
//{
//	char arry1[] = "abcdefg";
//	char arry2[] = "qwertyu";
//	printf("%s\n%s\n", arry1, arry2);
//	swap(arry1, arry2);
//	printf("%s\n%s\n", arry1, arry2);
//	return 0;
//}
