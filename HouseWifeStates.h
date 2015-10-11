#ifndef HOUSEWIFESTATES_H
#define HOUSEWIFESTATES_H
#include "HouseWife.h"
#include "State.h"
class HouseWife;
class GoAndCookState : public State<HouseWife>
{
	GoAndCookState() {};
	GoAndCookState(const GoAndCookState& c);//copy constuctor
	GoAndCookState& operator=(const GoAndCookState&);// copy assignment

public:

	static GoAndCookState* Instance();

	virtual void Enter(HouseWife* w);

	virtual void Execute(HouseWife* w);

	virtual void Exit(HouseWife* w);
};
class RestAndWaitState : public State<HouseWife>
{
	RestAndWaitState() {};
	RestAndWaitState(const RestAndWaitState& c);//copy constuctor
	RestAndWaitState& operator=(const RestAndWaitState&);// copy assignment

public:

	static RestAndWaitState* Instance();

	virtual void Enter(HouseWife* w);

	virtual void Execute(HouseWife* w);

	virtual void Exit(HouseWife* w);
};
#endif


