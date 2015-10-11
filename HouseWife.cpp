#include "HouseWife.h"
#include "HouseWifeStates.h"


HouseWife::HouseWife(int id):BaseGameEntity(id)
{
	stateMachine = new StateMachine<HouseWife>(this);
	stateMachine->SetCurrentState(GoAndCookState::Instance());
}

void HouseWife::Update() {
	stateMachine->Update();
}
