#include "Queue.h"

using namespace std;

void Push(Queue& queue, int value)
{
	if (queue.Tail > ARR_SIZE - 1)
	{
		cout << "Queue is Full" << endl;
		return;
	}
	else if (queue.Tail < 0)
	{
		queue.Arr[queue.Head] = value;
		queue.Tail++;
	}
	else
	{
		queue.Arr[++queue.Tail] = value;
	}
	
}

void Pop(Queue& queue)
{
	if (queue.Head == queue.Tail)
	{
		cout << "Queue is Empty" << endl;
		queue.Head = 0;
		queue.Tail = -1;
		return;
	}
	queue.Head++;
}

void Print(Queue& queue)
{
	cout << "--------------" << endl;
	for (int i = queue.Head; i <= queue.Tail; i++)
	{
		cout << queue.Arr[i] << endl;
	}
	cout << "--------------" << endl;
}

void InteractionTuto(Queue& queue)
{
	cout << "1 = PUSH, 2 = POP, 3 = QUIT" << endl;
}
