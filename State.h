#pragma once

#include <iostream>
using namespace std;

#include "Mark.h"

class Father;

class State abstract
{
public:
	virtual void HandleMark(Father* father, Mark mark);
	virtual void ChangeState(Father* father, Mark mark) = 0;
};