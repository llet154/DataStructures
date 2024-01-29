//#ifndef __BINARY_TREE2_H__
//#define __BINARY_TREE2_H__
//
//typedef int BTData;
//
//typedef struct _bTreeNode
//{
//	BTData data;
//	struct _bTreeNode* left;
//	struct _bTreeNode* right;
//}BTreeNode;
//
//BTreeNode* MakeBTreeNode(void);
//BTData GetData(BTreeNode* bt);
//void SetData(BTreeNode* bt, BTData data);
//
//BTreeNode* GetLeftSubTree(BTreeNode* bt);
//BTreeNode* GetRightSubTree(BTreeNode* bt);
//
//void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
//void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);
//
//typedef void VisitFuncPtr(BTData data); //(*VisitFuncPtr)로 해도 됨
////앞에 typedef를 붙임으로써 VisitFuncPtr은 함수 포인터 형으로 정의됨
//
//
//void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action);
//void InorderTraverse(BTreeNode* bt, VisitFuncPtr action);
//void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action);
//
//#endif