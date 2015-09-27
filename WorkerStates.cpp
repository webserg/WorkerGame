#include "WorkerStates.h"
#include "main.h"

GoHomeAndRestState* GoHomeAndRestState::Instance()
{
	static GoHomeAndRestState instance;
	return &instance;
}

void GoHomeAndRestState::Enter(Worker* w) {
	cout << "enter" << "\n";
};

void GoHomeAndRestState::Execute(Worker* w) {
	cout << "execute state go home and rest" << "\n";
};

void GoHomeAndRestState::Exit(Worker* w) {
	cout << "exit" << "\n";
};

EnterWorkAndMakeMoney* EnterWorkAndMakeMoney::Instance()
{
	static EnterWorkAndMakeMoney instance;
	return &instance;
}

void EnterWorkAndMakeMoney::Enter(Worker* w) {
	cout << "enter" << "\n";
};

void EnterWorkAndMakeMoney::Execute(Worker* w) {
	cout << "execute state enter work and make money" << "\n";
};

void EnterWorkAndMakeMoney::Exit(Worker* w) {
	cout << "exit" << "\n";
};


