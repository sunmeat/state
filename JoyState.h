#pragma once
#include "State.h"

// ��������� ������� (S3)
class JoyState : public State
{
public:
	JoyState();
	void ChangeState(Father* father, Mark mark);
	void Joy();
};