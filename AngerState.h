#pragma once
#include "State.h"

// состояние гнева (S4)
class AngerState : public State
{
public:
	AngerState();
	void ChangeState(Father* father, Mark mark);
	void Scold();
};