#pragma once
#include "main.h"
#include "BaseGameEntity.h"
#include "StateMachine.h"
#include "WorkerStates.h"
#include "Location.h"

class Worker : BaseGameEntity
{
	StateMachine<Worker>* stateMachine;
	Location location;
public:
	Worker(int id); 
	~Worker() {
		delete stateMachine;
	};
	void Update();
	void Worker::ChangeState(State<Worker>* pNewState);
	StateMachine<Worker>* GetFSM()const { return stateMachine; }
	Location getLocation() const {
		return location;
	}
};

