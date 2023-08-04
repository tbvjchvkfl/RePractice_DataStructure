#pragma once
#include <iostream>

const int ARR_SIZE{ 10 };

struct Stack
{
	int arr[ARR_SIZE]{};
	
	int topIndex{-1};
};

enum Command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};

void Push(Stack& stack, int value);
void Pop(Stack& stack);
void Print(Stack& stack);
void CommandTuto(Stack& stack);