#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() {};
void DriveSubsystem::Periodic() {};
void DriveSubsystem::Drive(double xSpeed, double ySpeed, double rot, bool fieldRelative) 
{
    if (!fieldRelative) {
        m_drive.DriveCartesian(ySpeed, xSpeed, rot);
    } else {
        // TODO: implement field relative controls
        m_drive.DriveCartesian(ySpeed, xSpeed, rot);
    }
}