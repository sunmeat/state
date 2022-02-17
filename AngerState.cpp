#include "Father.h"
#include "AngerState.h"
#include "StrongAngerState.h"
#include "NeutralState.h"

AngerState::AngerState()
{
	cout << "Отец в состоянии гнева:\n";
	Scold();
}

void AngerState::ChangeState(Father* father, Mark mark)
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

void AngerState::Scold() // y1
{
	cout << "Ругает сына.\n";
}