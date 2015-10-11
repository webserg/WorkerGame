#include "HouseWifeStates.h"
#include "main.h"
class GoAndCookState* GoAndCookState::Instance() {
	static GoAndCookState instance;
	return &instance;
}

void GoAndCookState::Enter(HouseWife* w) {
	cout << "enter go and cook state" << "\n";
}

void GoAndCookState::Execute(HouseWife* w) {
	Lunch *lunch = Lunch::Instance();
	if (lunch->isReady()) {
		w->ChangeState(RestAndWaitState::Instance());
	}
	else {
		lunch->increase();	
	}
}

void GoAndCookState::Exit(HouseWife* w) {}

class RestAndWaitState* RestAndWaitState::Instance() {
	static RestAndWaitState instance;
	return &instance;
}

void RestAndWaitState::Enter(HouseWife* w) {

}

void RestAndWaitState::Execute(HouseWife* w) {
	Lunch *lunch = Lunch::Instance();
	if (lunch->isReady()) {
		cout << "just rest" << "\n";
	}
	else {
		w->ChangeState(GoAndCookState::Instance());
	}
}

void RestAndWaitState::Exit(HouseWife* w) {}


