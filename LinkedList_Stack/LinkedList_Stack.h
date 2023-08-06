#pragma once

struct Stack_Element
{
	int value{};

	Stack_Element* pNext{};
};

struct Stack
{
	int count{};

	Stack_Element* pFocus{};
};

void Push(Stack& stack, int value);
void Pop(Stack& stack);
void Print(Stack& stack);
void RemoveAll(Stack& stack);