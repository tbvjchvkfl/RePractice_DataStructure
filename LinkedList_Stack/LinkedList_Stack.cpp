#include <iostream>
#include "LinkedList_Stack.h"

using namespace std;

void Push(Stack& stack, int value)
{
	Linked_Stack* pLinkedStack = new Linked_Stack{};
	pLinkedStack->value = value;
	
	pLinkedStack->pNext = stack.pFocus;
	stack.pFocus = pLinkedStack;
	stack.count++;
}

void Pop(Stack& stack)
{
	if (stack.count == 0)
	{
		cout << "Stack is Empty" << endl;
		return;
	}
	
	Linked_Stack* pPrev = stack.pFocus;
	stack.pFocus = pPrev->pNext;
	stack.count--;
	delete pPrev;
}
void Print(Stack& stack)
{
	Linked_Stack* pStack = stack.pFocus;

	while (pStack != nullptr)
	{
		cout << pStack->value << endl;
		pStack = pStack->pNext;
	}
}
void RemoveAll(Stack& stack)
{
	Linked_Stack* pLinkedStack = stack.pFocus;
	Linked_Stack* pNext{};

	while (pLinkedStack)
	{
		pNext = pLinkedStack->pNext;
		delete pLinkedStack;
		pLinkedStack = pNext;
	}

	stack.count = 0;
	stack.pFocus = nullptr;
}