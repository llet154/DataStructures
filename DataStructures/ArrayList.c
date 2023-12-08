//#include <stdio.h>
//#include "ArrayList.h"
//
//void ListInit(List* plist)
//{
//	plist->numOfData = 0;
//	plist->curPosition = -1;
//}
//
//void LInsert(List* plist, LData data)
//{
//	if (plist->numOfData > LIST_LEN)
//	{
//		puts("저장이 불가합니다.\n");
//		return;
//	}
//
//	plist->arr[plist->numOfData] = data;
//	plist->numOfData += 1;
//}
//
//int LSum(List* plist, LData num)
//{
//	int sum = 0;
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		sum += plist->arr[i];
//	}
//	return sum;
//}
//
//int LFirst(List* plist, LData* data)
//{
//	if (plist->numOfData == 0)
//	{
//		return FALSE;
//	}
//	plist->curPosition = 0;
//	*data = plist->arr[0];
//	return TRUE;
//}
//
//int LNext(List* plist, LData* data)
//{
//	if ((plist->numOfData) - 1 <= plist->curPosition)
//		return FALSE;
//	plist->curPosition += 1;
//	*data = plist->arr[plist->curPosition];
//	return TRUE;
//}
//
//LData LRemove(List* plist)
//{
//	int rpos = plist->curPosition;
//	int num = plist->numOfData;
//	int i;
//	LData rdata = plist->arr[rpos];
//
//	for (i = rpos; i < num - 1; i++)
//		plist->arr[i] = plist->arr[i + 1];
//
//	(plist->numOfData)--;
//	(plist->curPosition)--;
//	return rdata;
//}
//
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}