//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include "ListBaseStack.h"
//
//int GetOpPrec(char op)
//{
//	switch (op)
//	{
//	case '*':
//	case '/':
//		return 5;
//	case '+':
//	case '-':
//		return 3;
//	case '(':
//		return 1;
//	}
//
//	return -1;
//}
//
//int WhoPrecOp(char op1, char op2)
//{
//	int op1Prec = GetOpPrec(op1);
//	int op2Prec = GetOpPrec(op2);
//
//	if (op1Prec > op2Prec)
//		return 1;
//	else if (op1Prec < op2Prec)
//		return -1;
//	else
//		return 0;
//}
//
//void ConvToRPNExp(char exp[])
//{
//	Stack stack;
//	int expLen = strlen(exp);
//	char* convExp = (char*)malloc(expLen + 1);	//변환된 수식을 담을 공간 마련
//
//	int i, idx = 0;
//	char tok, popOp;
//
//	memset(convExp, 0, sizeof(char) * expLen + 1);	//마련한 공간 0으로 초기화
//	StackInit(&stack);
//
//	for (i = 0; i < expLen; i++)
//	{
//		tok = exp[i];
//
//		if (isdigit(tok))	//피연산자면
//		{
//			convExp[idx++] = tok;
//		}
//		else	//연산자면
//		{
//			switch (tok)
//			{
//			case '(':
//				SPush(&stack, tok);
//				break;
//			case ')':
//				while (1)
//				{
//					popOp = SPop(&stack);
//					if (popOp == '(')
//						break;
//					convExp[idx++] = popOp;
//				}
//				break;
//			case '+': case '-':
//			case '*': case '/':
//				while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
//					convExp[idx++] = SPop(&stack);
//				SPush(&stack, tok);
//				break;
//			}
//		}
//	}
//
//	while (!SIsEmpty(&stack))
//		convExp[idx++] = SPop(&stack);	//스택에 남아 있는 모든 연사자를 이동시키는 반복문
//	
//	strcpy(exp, convExp);
//	free(convExp);
//}