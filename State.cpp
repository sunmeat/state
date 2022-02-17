#include "State.h"

void State::HandleMark(Father* father, Mark mark)
{
	ChangeState(father, mark);
}