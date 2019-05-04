
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	string package;
	float price;
	float time;
	cout << ("Enter Package: "); cin >> package;

	if (package == "A")
	{
		cout << "Hours Used: "; cin >> time;
		{
			if (package == "A")
			{
				if (time <= 10)
				{
					price = 995;
				}
				else (time > 10);
				{
					price = 995 + (time - 10) * 20;
				}
			}
		}
	}
	if (package == "B")
	{
		cout << ("Hours Used: "); cin >> time;
		{
			if (package == "B");
			{
				if (time <= 20)
				{
					price = 1495;
				}
				else (time > 20);
				{
					price = 1495 + (time - 20) * 10;
				}
			}
		}
	}
	if (package == "C")
	{
		cout << ("Hours Used: UNLIMITED""\n");
		{
			price = 1995;
		}
	}
	cout << ("Amount Due: P") << price;

	_getch();
	return 0;
}
