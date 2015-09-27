#pragma once
class BaseGameEntity
{
private:
	int id;
public:
	BaseGameEntity(int id) : id{id}
	{
	}
	virtual ~BaseGameEntity() {}
	virtual void Update() = 0;
	int ID()const { return id; }
};