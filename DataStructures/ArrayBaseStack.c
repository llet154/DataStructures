//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "ArrayBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->topIndex = -1;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->topIndex == -1)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	pstack->topIndex += 1;
//	pstack->stackArr[pstack->topIndex] = data;
//}
//
//Data SPop(Stack* pstack)
//{
//	/*int rIdx;*/
//
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error!");
//		exit(-1);
//	}
//
//	/*rIdx = pstack->topIndex;
//	pstack->topIndex -= 1;
//
//	return pstack->stackArr[rIdx];*/
//
//	int sdata = pstack->stackArr[pstack->topIndex];
//	pstack->topIndex -= 1;
//	return sdata;
//}
//
//Data SPeek(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error!");
//		exit(-1);
//	}
//
//	return pstack->stackArr[pstack->topIndex];
//}