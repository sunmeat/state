#pragma once
#include "State.h"

// состояние сильного гнева (S2)
class StrongAngerState : public State
{
public:
	StrongAngerState();
	void ChangeState(Father* father, Mark mark);
	void BeatBelt();
};