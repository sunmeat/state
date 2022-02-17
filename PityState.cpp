#include "Father.h"
#include "AngerState.h"
#include "NeutralState.h"
#include "PityState.h"

PityState::PityState()
{
	cout << "Отец в состоянии жалости:\n";
	Calm();
}

void PityState::ChangeState(Father* father, Mark mark)
{
	switch (mark)
	{
	case Mark::TWO:
		father->SetState(new AngerState); // S4
		break;
	case Mark::FIVE:
		father->SetState(new NeutralState); // S0
		break;
	}
}

void PityState::Calm() // y2
{
	cout << "Успокаивает сына.\n";
}