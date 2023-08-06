#include <iostream>
#include "LinkedList_Stack.h"

using namespace std;

void Push(Stack& stack, int value)
{
	Stack_Element* pStack_Element = new Stack_Element{};
	pStack_Element->value = value;
	
	pStack_Element->pNext = stack.pFocus;
	stack.pFocus = pStack_Element;
	stack.count++;
}

void Pop(Stack& stack)
{
	if (stack.count == 0)
	{
		cout << "Stack is Empty" << endl;
		return;
	}
	
	Stack_Element* pPrev = stack.pFocus;
	stack.pFocus = pPrev->pNext;
	stack.count--;
	delete pPrev;
}
void Print(Stack& stack)
{
	Stack_Element* pStack = stack.pFocus;

	while (pStack != nullptr)
	{
		cout << pStack->value << endl;
		pStack = pStack->pNext;
	}
}
void RemoveAll(Stack& stack)
{
	Stack_Element* pStack_Element = stack.pFocus;
	Stack_Element* pNext{};

	while (pStack_Element)
	{
		pNext = pStack_Element->pNext;
		delete pStack_Element;
		pStack_Element = pNext;
	}

	stack.count = 0;
	stack.pFocus = nullptr;
}