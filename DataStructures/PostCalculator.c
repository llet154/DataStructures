//#include <string.h>
//#include <ctype.h>
//#include "ListBaseStack.h"
//
//int EvalRPNExp(char exp[])
//{
//	Stack stack;
//	int expLen = strlen(exp);
//	int i;
//	char tok, op1, op2;
//
//	StackInit(&stack);
//
//	for (i = 0; i < expLen; i++)
//	{
//		tok = exp[i];
//		if (isdigit(tok))
//		{
//			SPush(&stack, tok - '0');	//문자를 꺼내기때문에 숫자로 변환해주려고 '0'을 뺌
//		}
//		else
//		{
//			op2 = SPop(&stack);
//			op1 = SPop(&stack);
//
//			switch (tok)
//			{
//			case '+':
//				SPush(&stack, op2 + op1);
//				break;
//			case '-':
//				SPush(&stack, op2 - op1);
//				break;
//			case '*':
//				SPush(&stack, op2 * op1);
//				break;
//			case '/':
//				SPush(&stack, op2 / op1);
//				break;
//			}
//		}
//	}
//	return SPop(&stack);
//}