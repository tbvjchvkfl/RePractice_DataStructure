#pragma once

struct Linked_Stack
{
	int value{};

	Linked_Stack* pNext{};
};

struct Stack
{
	int count{};

	Linked_Stack* pFocus{};
};

void Push(Stack& stack, int value);
void Pop(Stack& stack);
void Print(Stack& stack);
void RemoveAll(Stack& stack);