#pragma once
#include "State.h"

// состояние жалости (S1)
class PityState : public State
{
public:
	PityState();
	void ChangeState(Father* father, Mark mark);
	void Calm();
};