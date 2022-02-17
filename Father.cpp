#include "Father.h"

void Father::SetState(State* new_state)
{
	state = new_state;
}

State* Father::GetState() const
{
	return state;
}

Father::Father()
{
	state = new NeutralState;
}

void Father::FindOut(Mark mark)
{
	state->HandleMark(this, mark);
}