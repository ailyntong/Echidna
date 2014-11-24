#ifndef ROBOT_H
#define ROBOT_H

#include "Drivetrain.h"

class Robot {
public:
	Robot();
	void init();
	void disable();
	void update();

	void move(double linear, double curvy);
private:
	Drivetrain *drivetrain;
};

#endif