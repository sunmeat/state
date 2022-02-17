#pragma once
#include "State.h"

// состояние радости (S3)
class JoyState : public State
{
public:
	JoyState();
	void ChangeState(Father* father, Mark mark);
	void Joy();
};