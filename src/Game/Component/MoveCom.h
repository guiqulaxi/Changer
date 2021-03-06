#ifndef _MOVE_COM_H_
#define _MOVE_COM_H_

#include <math.h>
#include "Core/ECS/EntityFu.h"
#include "Core/Math/Vector.h"
#include "Game/common.h"

struct MoveCom : Entity::Component
{
	CREATE_CID;

	float speed;
	float tiltSpeed;
	kDirection direction;
	Vector position;

	MoveCom(float speed, kDirection direction, Vector position)
		: speed(speed)
		, direction(direction)
		, position(position
	){
		tiltSpeed = sqrt((speed * speed) * 2.0f);
	}

	MoveCom()
		: MoveCom(speed, direction, position){}

	virtual bool empty() const
	{
		return false;
	}
};

#endif