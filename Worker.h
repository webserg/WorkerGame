#ifndef WORKER_H
#define WORKER_H
#include "main.h"
#include "Location.h"

class Worker : public BaseGameEntity
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
	void Update() override;
	void HandleMessage(const Message & m) override;
	void ChangeState(State<Worker>* pNewState) { stateMachine->ChangeState(pNewState); }
	void ChangeLocation(Location loc) { location = loc; }
	StateMachine<Worker>* GetFSM() const { return stateMachine; }
	Location getLocation() const { return location;	}
	void incrementExhausted() { exhaustedLevel++; }
	void decrementExhausted() { exhaustedLevel--; }
	void incrementWealthy() { wealthyLevel++; }
	bool isExhausted() { if (exhaustedLevel > 10) return true; else return false; }
	bool isWealthy() { if (wealthyLevel > 10) return true; else return false; }
};
#endif

