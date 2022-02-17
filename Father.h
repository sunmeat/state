#pragma once

#include "State.h"
#include "NeutralState.h"

class Father
{
	State* state;
public:
	void SetState(State* new_state);
	State* GetState() const;
	Father();
	void FindOut(Mark mark);
};