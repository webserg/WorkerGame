#ifndef BASEGAMEENTITY_H
#define BASEGAMEENTITY_H
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
#endif