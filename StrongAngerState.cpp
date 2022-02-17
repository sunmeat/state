#include "Father.h"
#include "NeutralState.h"
#include "StrongAngerState.h"

StrongAngerState::StrongAngerState()
{
	cout << "ќтец в состо€нии сильного гнева:\n";
	BeatBelt();
}

void StrongAngerState::ChangeState(Father* father, Mark mark)
{
	switch (mark)
	{
	case Mark::TWO:
		father->SetState(new StrongAngerState); // S2
		break;
	case Mark::FIVE:
		father->SetState(new NeutralState); // S0
		break;
	}
}

void StrongAngerState::BeatBelt() // y0
{
	cout << "ЅьЄт сына ремнЄм.\n";
}