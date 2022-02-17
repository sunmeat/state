#include "Father.h"

int main()
{
	system("chcp 1251>0");
	system("title State Pattern Example");

	Father f;
	f.FindOut(Mark::FIVE);
	f.FindOut(Mark::FIVE);
	f.FindOut(Mark::TWO);
	f.FindOut(Mark::TWO);
	f.FindOut(Mark::TWO);

	system("pause");
}