//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "ArrayList.h"
//
//int main(void)
//{
//	//ArrayList의 생성 및 초기화
//	List list;
//	int data;
//	ListInit(&list);
//
//	//5개의 데이터 저장
//	LInsert(&list, 1); LInsert(&list, 2);
//	LInsert(&list, 3); LInsert(&list, 4);
//	LInsert(&list, 5); LInsert(&list, 6);
//	LInsert(&list, 7); LInsert(&list, 8);
//	LInsert(&list, 9);
//
//	printf("%d\n", LSum(&list, LCount(&list)));
//	 
//	//2와 3의 배수 다 삭제
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
//	//삭제 후 남은 데이터 전체 출력
//	printf("현재 데이터의 수: %d\n", LCount(&list));
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