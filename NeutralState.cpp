#include "Father.h"
#include "PityState.h"
#include "JoyState.h"
#include "NeutralState.h"

NeutralState::NeutralState()
{
	cout << "Отец в нейтральном состоянии:\n";
	Hope();
}

void NeutralState::ChangeState(Father* father, Mark mark)
{
	switch (mark)
	{
	case Mark::TWO:
		father->SetState(new PityState); // S1
		break;
	case Mark::FIVE:
		father->SetState(new JoyState); // S3
		break;
	}
}

void NeutralState::Hope() // y3
{
	cout << "Надеется на хорошие оценки.\n";
}