#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack IsStack;

	while (true)
	{
		CommandTuto(IsStack);
		int input{};
		cin >> input;
		
		switch (input)
		{
		case PUSH:
		{
			cout << "���� �Է��ϼ���" << endl;
			int com{};
			int c{};
			cin >> c;
			Push(IsStack, c);
			Print(IsStack);
		}
		break;
		case POP:
		{
			Pop(IsStack);
			Print(IsStack);
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