#pragma once
#include "State.h"

class NeutralState : public State
{
public:
	NeutralState();
	void ChangeState(Father* father, Mark mark);
	void Hope();
};