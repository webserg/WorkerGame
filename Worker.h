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
	int exhaustedLevel;
	int wealthyLevel;
public:
	Worker(int id);
	~Worker() {
		delete stateMachine;
	};
	void Update();
	void Worker::ChangeState(State<Worker>* pNewState) { stateMachine->ChangeState(pNewState); }
	void ChangeLocation(Location loc) { location = loc; }
	StateMachine<Worker>* GetFSM()const { return stateMachine; }
	Location getLocation() const { return location;	}
	void incrementExhausted() { exhaustedLevel++; }
	void decrementExhausted() { exhaustedLevel--; }
	void incrementWealthy() { wealthyLevel++; }
	bool isExhausted() { if (exhaustedLevel > 10) return true; else return false; }
	bool isWealthy() { if (wealthyLevel > 10) return true; else return false; }
};

