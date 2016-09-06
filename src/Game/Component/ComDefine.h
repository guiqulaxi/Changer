#ifndef _COM_DEFINE_H_
#define _COM_DEFINE_H_

#include "Core/ECS/EntityFu.h"
#include "SpriteCom.h"
#include "PositionCom.h"
#include "PhysicsCom.h"
#include "BodyCom.h"

/// �����.cpp��ע��
/// Ԥ����ϵͳ���
struct System::Ent
{
	Eid id;
	// BEGIN
	SpriteCom& sprite;
	PositionCom& position;
	PhysicsCom& physics;
	BodyCom& body;
	// END

	Ent(Eid _id);
};

#endif //_COM_DEFINE_H_