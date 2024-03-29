//#include "UsefulHeap.h"
//
//void HeapInit(Heap* ph, PriorityComp pc)
//{
//	ph->numOfData = 0;
//	ph->comp = pc;
//}
//
//int HIsEmpty(Heap* ph)
//{
//	if (ph->numOfData == 0)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//int GetParentIDX(int idx)
//{
//	return idx / 2;
//}
//
//int GetLChildIDX(int idx)
//{
//	return idx * 2;
//}
//
//int GetRChildIDX(int idx)
//{
//	return GetLChildIDX(idx) + 1;
//}
//
////두 개의 자식 노드 중 높은 우선순위의 자식 노드 인덱스 값 반환
//int GetHiPriChildIDX(Heap* ph, int idx)
//{
//	if (GetLChildIDX(idx) > ph->numOfData)
//		return 0;
//	else if (GetLChildIDX(idx) == ph->numOfData)
//		return GetLChildIDX(idx);
//	else
//	{
//		//if (ph->heapArr[GetLChildIDX(idx)].pr
//			//> ph->heapArr[GetRChildIDX(idx)].pr)
//		if(ph->comp(ph->heapArr[GetLChildIDX(idx)],
//			ph->heapArr[GetRChildIDX(idx)])<0)
//			return GetRChildIDX(idx);
//		else
//			return GetLChildIDX(idx);
//	}
//}
//
//void HInsert(Heap* ph, HData data)
//{
//	int idx = ph->numOfData + 1;
//
//	while (idx != 1)
//	{
//		//if (pr < (ph->heapArr[GetParentIDX(idx)].pr))
//		if(ph->comp(data, ph->heapArr[GetParentIDX(idx)])>0)
//		{
//			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
//			idx = GetParentIDX(idx);
//		}
//		else
//			break;
//	}
//	ph->heapArr[idx] = data;
//	ph->numOfData += 1;
//}
//
//HData HDelete(Heap* ph)
//{
//	HData retData = ph->heapArr[1];
//	HData lastElem = ph->heapArr[ph->numOfData];
//
//	int parentIDX = 1;
//	int childIdx;
//
//	while (childIdx = GetHiPriChildIDX(ph, parentIDX))
//	{
//		//if (lastElem.pr <= ph->heapArr[childIdx].pr)
//		if(ph->comp(lastElem,ph->heapArr[childIdx])>=0)
//			break;
//
//		ph->heapArr[parentIDX] = ph->heapArr[childIdx];
//		parentIDX = childIdx;
//	}
//
//	ph->heapArr[parentIDX] = lastElem;
//	ph->numOfData -= 1;
//	return retData;
//}