#include "RobotContainer.h"

#include <frc2/command/InstantCommand.h>
#include <frc2/command/RunCommand.h>

RobotContainer::RobotContainer() 
{
    drive.SetDefaultCommand(frc2::RunCommand(
        [this] {
            drive.Drive(
                RightJoystick.GetY(),
                RightJoystick.GetX(),
                LeftJoystick.GetX(),
                false // TODO: implement Shuffleboard input for the future
            );
        },
        {&drive}
    ));
};

frc2::Command* RobotContainer::GetAutonomousCommand() {
    // no autonomous as of yet
    
    // a "do-nothing" autonomous command
    return new frc2::InstantCommand(
        [this] {
            drive.Drive(
                0,
                0,
                0,
                false
            );
        },
        {&drive} // required subsystems
    );
};
