#include "Father.h"
#include "PityState.h"
#include "StrongJoyState.h"
#include "JoyState.h"

JoyState::JoyState()
{
	cout << "Отец в состоянии радости:\n";
	Joy();
}

void JoyState::ChangeState(Father* father, Mark mark)
{
	switch (mark)
	{
	case Mark::TWO:
		father->SetState(new PityState); // S1
		break;
	case Mark::FIVE:
		father->SetState(new StrongJoyState); // S5
		break;
	}
}

void JoyState::Joy() // y4
{
	cout << "Радуется успехам сына.\n";
}