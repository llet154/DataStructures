//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "ArrayList.h"
//
//int main(void)
//{
//	//ArrayList�� ���� �� �ʱ�ȭ
//	List list;
//	int data;
//	ListInit(&list);
//
//	//5���� ������ ����
//	LInsert(&list, 1); LInsert(&list, 2);
//	LInsert(&list, 3); LInsert(&list, 4);
//	LInsert(&list, 5); LInsert(&list, 6);
//	LInsert(&list, 7); LInsert(&list, 8);
//	LInsert(&list, 9);
//
//	printf("%d\n", LSum(&list, LCount(&list)));
//	 
//	//2�� 3�� ��� �� ����
//	if (LFirst(&list, &data))
//	{
//		if (data%2==0 || data%3==0)
//			LRemove(&list);
//
//		while (LNext(&list, &data))
//		{
//			if (data % 2 == 0 || data % 3 == 0)
//				LRemove(&list);
//		}
//	}
//
//	//���� �� ���� ������ ��ü ���
//	printf("���� �������� ��: %d\n", LCount(&list));
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//			printf("%d ", data);
//	}
//	printf("\n\n");
//
//	return 0;
//}