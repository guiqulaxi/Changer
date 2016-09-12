#include "Core/ECS/EntityFu.h"

/// Position Component
struct PositionCom : Entity::Component
{
	CREATE_CID;

	float x;
	float y;

	bool _empty;

	PositionCom()
		: PositionCom(0, 0)
	{
		_empty = true;
	}

	PositionCom(float x, float y)
		: x(x)
		, y(y) 
	{
		_empty = false;
	}

	virtual bool empty() const
	{
		return _empty;
	}
};