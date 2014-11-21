#include "Robot.h"

#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H

class HumanController {
public:
	HumanController();
	void update(Robot *robot);
private:
	Joystick joy1;
	Joystick joy2;
};

#endif