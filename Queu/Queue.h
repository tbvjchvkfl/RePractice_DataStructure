#pragma once
#include <iostream>

const int ARR_SIZE{ 10 };

struct Queue
{
	int Arr[ARR_SIZE]{};

	int Head{};
	int Tail{-1};
};

enum Command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};

void Push(Queue& queue, int value);
void Pop(Queue& queue);
void Print(Queue& queue);
void InteractionTuto(Queue& queue);