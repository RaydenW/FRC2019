/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/HatchServoMove.h"


#include "../../include/Robot.h"
#include "../../include/OI.h"
#include "WPILib.h"

#include <iostream>
using namespace std;

HatchServoMove::HatchServoMove() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //pos = p;
  Requires(Robot::m_hatchServo);
}

// Called just before this Command runs the first time
void HatchServoMove::Initialize() {
  if(Robot::m_hatchServo->getOpenStatus()){
    Robot::m_hatchServo->setPosition(0.0);
  }
  else{
    Robot::m_hatchServo->setPosition(0.5);
  }
  //std::cout << "open" << std::endl;
}

// Called repeatedly when this Command is scheduled to run
void HatchServoMove::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool HatchServoMove::IsFinished() { 
  return true;
}
// Called once after isFinished returns true
void HatchServoMove::End() {
  Robot::m_hatchServo->switchOpenStatus();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HatchServoMove::Interrupted() {}
