#pragma once

// All constants are declared here!

// constants related to the drivebase
namespace DriveConstants
{
    // constexpr int kpigeonIMUCANid = 0;
    
    constexpr int kfrontLeftMotorCANid = 1;
    constexpr int krearLeftMotorCANid = 2;
    constexpr int kfrontRightMotorCANid = 3;
    constexpr int krearRightMotorCANid = 4;
}

// controllers
namespace IOConstants
{
    constexpr int kRightJoystickPort = 0;
    constexpr int kLeftJoystickPort = 1;
}