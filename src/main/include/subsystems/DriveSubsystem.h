#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/drive/MecanumDrive.h>
#include <rev/CANSparkMax.h>
// change to pigeon2 whenever that happens
// #include <ctre/phoenix/sensors/pigeonIMU.h>

#include "Constants.h"

class DriveSubsystem : public frc2::SubsystemBase
{
public:
    DriveSubsystem();

    // runs whenever the command scheduler runs
    void Periodic() override;

    /**
     * Drives the robot at given x, y and theta speeds. Speeds range from [-1, 1]
     * and the linear speeds have no effect on the angular speed.
     *
     * @param xSpeed        Speed of the robot in the x direction
     *                      (forward/backwards).
     * @param ySpeed        Speed of the robot in the y direction (sideways).
     * @param rot           Angular rate of the robot.
     * @param fieldRelative Whether the provided x and y speeds are relative to
     *                      the field.
     */
    void Drive(double xSpeed, double ySpeed, double rot, bool fieldRelative);

private:
    rev::CANSparkMax m_frontLeft{DriveConstants::kfrontLeftMotorCANid, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_rearLeft{DriveConstants::krearLeftMotorCANid, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_frontRight{DriveConstants::kfrontRightMotorCANid, rev::CANSparkMax::MotorType::kBrushless};
    rev::CANSparkMax m_rearRight{DriveConstants::krearRightMotorCANid, rev::CANSparkMax::MotorType::kBrushless};

    frc::MecanumDrive m_drive{m_frontLeft, m_rearLeft, m_frontRight, m_rearRight};

    // ctre::phoenix::sensors::PigeonIMU pigeon {DriveConstants::kpigeonIMUCANid};
};