#pragma once

#include <frc/Joystick.h>
#include <frc2/command/Command.h>
#include "Constants.h"

// include all subsystems
#include "subsystems/DriveSubsystem.h"

class RobotContainer 
{
    public:
        RobotContainer();

        frc2::Command* GetAutonomousCommand();

    private:
        // declare drivetrain controller joysticks
        frc::Joystick RightJoystick {IOConstants::kRightJoystickPort};
        frc::Joystick LeftJoystick {IOConstants::kLeftJoystickPort};

        // the robot's subsystems
        DriveSubsystem drive;
};