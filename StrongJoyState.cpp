#include "Father.h"
#include "PityState.h"
#include "StrongJoyState.h"

StrongJoyState::StrongJoyState()
{
	cout << "���� � ��������� ������� �������:\n";
	Exult();
}

void StrongJoyState::ChangeState(Father* father, Mark mark)
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

void StrongJoyState::Exult() // y5
{
	cout << "������ � �������� �����.\n";
}