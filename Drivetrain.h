#include <algorithm>

#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

class Drivetrain {
public:
	Drivetrain();
	void init();
	void disable();
	void update();
	void meep(double linear, double curvy);
	void set();
private:
	Victor frontleft;
	Victor backleft;
	Victor frontright;
	Victor backright;

	double linear;
	double curvy;
	double leftSpeed;
	double rightSpeed;

	enum State {ON, OFF} state;
};

#endif