#include "Robot.h"
#include "HumanController.h"

class Echidna : public IterativeRobot {
public:
	Echidna();
	void robotInit();
	void teleopInit();
	void teleopPeriodic();
	void teleopDisabled();
private:
	Robot robot;
	HumanController human;
};

Echidna::Echidna() :
robot(),
human()
{
	
}

void Echidna::robotInit() {
	robot.init();
}

void Echidna::teleopInit() {
	robot.init();
	robot.update();
}

void Echidna::teleopPeriodic() {
	human.update(&robot);
	robot.update();
}

void Echidna::teleopDisabled() {
	robot.disable();
	robot.update();
}

START_ROBOT_CLASS(Echidna);