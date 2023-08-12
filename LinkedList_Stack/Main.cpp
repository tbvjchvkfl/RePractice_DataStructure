#include <iostream>
#include "LinkedList_Stack.h"

int main()
{
	Stack IsStack;

	Push(IsStack, 3);
	Push(IsStack, 2);
	Push(IsStack, 1);
	Print(IsStack);
	Pop(IsStack);
	Print(IsStack);

	RemoveAll(IsStack);
	Print(IsStack);
}