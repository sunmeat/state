#pragma once
#include "State.h"

// ��������� ����� (S4)
class AngerState : public State
{
public:
	AngerState();
	void ChangeState(Father* father, Mark mark);
	void Scold();
};