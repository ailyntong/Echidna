#include "Robot.h"
#include "HumanController.h"

class Echidna : public IterativeRobot {
public:
	Echidna();
	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void AutonomousDisabled();
	void DisabledInit();
	void DisabledPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TeleopDisabled();
	void TestInit();
	void TestPeriodic();
private:
	Robot robot;
	HumanController human;
};

Echidna::Echidna() :
robot(),
human()
{
	
}

void Echidna::RobotInit() {
	robot.init();
}

void Echidna::AutonomousInit(){
	
}

void Echidna::AutonomousPeriodic() {

}

void Echidna::AutonomousDisabled() {
	
}

void Echidna::DisabledInit() {

}

void Echidna::DisabledPeriodic() {

}

void Echidna::TeleopInit() {
	robot.init();
	robot.update();
}

void Echidna::TeleopPeriodic() {
	human.update(&robot);
	robot.update();
}

void Echidna::TeleopDisabled() {
	robot.disable();
	robot.update();
}

void Echidna::TestInit() {

}

void Echidna::TestPeriodic() {

}

START_ROBOT_CLASS(Echidna);