#include "Stack.h"

using namespace std;

void Push(Stack& stack, int value)
{
	if (stack.topIndex > ARR_SIZE - 1)
	{
		cout << "�� �̻� ���� ���� �� �����ϴ�." << endl;
		return;
	}
	stack.arr[++stack.topIndex] = value;
	
}

void Pop(Stack& stack)
{
	if (stack.topIndex < 0)
	{
		cout << "���� ����ֽ��ϴ�." << endl;
		return;
	}
	stack.topIndex--;
}

void Print(Stack& stack)
{
	cout << "-----------------" << endl;
	for (int i = 0; i <= stack.topIndex; i++)
	{
		cout << stack.arr[i] << endl;
	}
	cout << "-----------------" << endl;
}

void CommandTuto(Stack& stack)
{
	cout << "1 = Push , 2 = Pop, 3 = Quit" << endl;
}
