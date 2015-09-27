#include "Worker.h"

Worker::Worker(int id) : location{home}, BaseGameEntity(id) {
	stateMachine = new StateMachine<Worker>(this);
	GoHomeAndRestState* state = GoHomeAndRestState::Instance();
	stateMachine->SetCurrentState(GoHomeAndRestState::Instance());
}

void Worker::Update() {
	stateMachine->Update();
}

