//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int BSearch(int arr[], int len, int target)
//{
//	int first = 0;
//	int last = len - 1;
//	int mid;
//	int opCount = 0;
//
//	while (first <= last)
//	{
//		mid = (first + last) / 2;
//
//		if (target == mid)
//		{
//			return arr[mid];
//		}
//		else
//		{
//			if (target < arr[mid])
//			{
//				last = mid - 1;
//			}
//			else
//			{
//				first = mid + 1;
//			}
//			opCount++;
//		}
//	}
//	printf("�񱳿���Ƚ��: %d\n", opCount);
//	return -1;
//}
//
//int main(void)
//{
//	int arr1[500] = { 0 };
//	int arr2[5000] = { 0 };
//	int arr3[50000] = { 0 };
//	int idx;
//
//	//�迭arr1�� �������, ������� ���� ���� 1�� ã����� ����
//	idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
//	if (idx == -1)
//		printf("Ž�� ����\n");
//	else
//		printf("Ÿ�� ���� �ε���: %d\n", idx);
//
//	//�迭arr2�� �������, ������� ���� ���� 1�� ã����� ����
//	idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 2);
//	if (idx == -1)
//		printf("Ž�� ����\n");
//	else
//		printf("Ÿ�� ���� �ε���: %d\n", idx);
//
//	//�迭arr3�� �������, ������� ���� ���� 1�� ã����� ����
//	idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 3);
//	if (idx == -1)
//		printf("Ž�� ����\n");
//	else
//		printf("Ÿ�� ���� �ε���: %d\n", idx);
//
//
//	return 0;
//}