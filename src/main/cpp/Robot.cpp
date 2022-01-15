#include "Robot.h"

#include <frc2/command/CommandScheduler.h>

// TODO: Setup shuffleboard values for configuration
void Robot::RobotInit() {}

void Robot::RobotPeriodic()
{
    frc2::CommandScheduler::GetInstance().Run();
};

void Robot::DisabledInit(){};
void Robot::DisabledPeriodic(){};
void Robot::AutonomousInit()
{
    autonomousCommand = container.GetAutonomousCommand();

    if (autonomousCommand != nullptr)
    {
        autonomousCommand->Schedule();
    }
};
void Robot::AutonomousPeriodic(){};
void Robot::TeleopInit()
{
    // stops autonomous commands from running
    if (autonomousCommand != nullptr)
    {
        autonomousCommand->Cancel();
        autonomousCommand = nullptr;
    }
};
void Robot::TeleopPeriodic(){

};
void Robot::TestPeriodic(){};

#ifndef RUNNING_FRC_TESTS
int main()
{
    return frc::StartRobot<Robot>();
}
#endif