#include "WorkerStates.h"
#include "main.h"

GoHomeAndRestState* GoHomeAndRestState::Instance()
{
	static GoHomeAndRestState instance;
	return &instance;
}

void GoHomeAndRestState::Enter(Worker* w) {
	cout << "enter" << "\n";
	if (w->getLocation() == home) {
		cout << "already at home do nothing" << "\n";
	}
	else {
		w->ChangeLocation(home);
	}
}

void GoHomeAndRestState::Execute(Worker* w) {
	cout << "execute state go home and rest" << "\n";
	if (!w->isExhausted()) {
		w->ChangeState(EnterWorkAndMakeMoney::Instance());
	}
	else {
		w->decrementExhausted();
	}
	
}

void GoHomeAndRestState::Exit(Worker* w) {
	cout << "exit" << "\n";	
}

EnterWorkAndMakeMoney* EnterWorkAndMakeMoney::Instance()
{
	static EnterWorkAndMakeMoney instance;
	return &instance;
}

void EnterWorkAndMakeMoney::Enter(Worker* w) {
	cout << "enter" << "\n";
	if (w->getLocation() == office) {
		cout << "already at work do job" << "\n";
	}
	else {
		w->ChangeLocation(office);
	}
}

void EnterWorkAndMakeMoney::Execute(Worker* w) {
	cout << "execute state enter work and make money" << "\n";
	if (w->isExhausted()) {
		w->ChangeState(GoHomeAndRestState::Instance());
	} else {
		w->incrementExhausted();
	}
}

void EnterWorkAndMakeMoney::Exit(Worker* w) {
	cout << "exit" << "\n";
};


