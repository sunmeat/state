#pragma once
#include "State.h"

// ��������� ������� ������� (S5)
class StrongJoyState : public State
{
public:
	StrongJoyState();
	void ChangeState(Father* father, Mark mark);
	void Exult();
};