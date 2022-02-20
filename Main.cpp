#include "Father.h"

// The state pattern is a behavioral software design pattern that allows an object
// to alter its behavior when its internal state changes.
// This pattern is close to the concept of finite-state machines.
// The state pattern can be interpreted as a strategy pattern, which is able to switch a strategy
// through invocations of methods defined in the pattern's interface.
	
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
