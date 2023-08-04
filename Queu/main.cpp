#include <iostream>
#include"Queue.h"

using namespace std;

int main()
{
	Queue IsQueue;

	InteractionTuto(IsQueue);
	
	while (true)
	{
		int input{};
		cin >> input;

		switch (input)
		{
		case PUSH:
		{
			cout << "값을 입력하세요" << endl;
			int c{};
			cin >> c;
			Push(IsQueue, c);
			Print(IsQueue);
		}
		break;
		case POP:
		{
			Pop(IsQueue);
			Print(IsQueue);
		}
		break;
		case QUIT:
		{
			return 0;
		}
		break;
		}
	}
}