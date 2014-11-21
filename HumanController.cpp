#include "HumanController.h"

HumanController::HumanController() :
joy1((uint_32t) 1),
joy2((uint_32t) 2)
{
}

void HumanController::update(Robot *robot) {
	robot->move(joy1.GetY(), joy2.GetX());
}