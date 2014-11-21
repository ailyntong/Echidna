#include "Drivetrain.h"

Drivetrain::Drivetrain() :
frontleft((uint32_t)5),
frontright((uint32_t)1),
backleft((uint32_t)6),
backright((uint32_t)2),
linear(0),
curvy(0),
leftSpeed(0),
rightSpeed(0)
{
}
void Drivetrain::init() {
	state = ON;
}

void Drivetrain::disable() {
	state = OFF;
}

void Drivetrain::update() {
	switch (state) {
	case ON:
		leftSpeed = std::min(std::max(linear - curvy, 1.0), -1.0);
		rightSpeed = std::min(std::max(linear + curvy, 1.0), -1.0);
		set();
		break;
	case OFF:
		frontleft.Set(0);
		frontright.Set(0);
		backleft.Set(0);
		backright.Set(0);
		break;
	}
}

void Drivetrain::meep(double linear, double curvy) {
	this->linear = linear;
	this->curvy = curvy;
}

void Drivetrain::set() {
	frontleft.Set(-leftSpeed);
	backleft.Set(-leftSpeed);
	frontright.Set(rightSpeed);
	backright.Set(rightSpeed);
}

