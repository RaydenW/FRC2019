/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "HatchServoExtend.h"


#include "../../include/Robot.h"
#include "../../include/OI.h"
#include "WPILib.h"

#include <iostream>
using namespace std;

HatchServoExtend() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  //pos = p;
  Requires(Robot::m_ballDispenser);
}

// Called just before this Command runs the first time
HatchServoExtend::Initialize() {
  Robot::m_ballDispenser->switchOpenStatus();
  Robot::m_ballDispenser->setPosition(0.5);
  std::cout << "open" << std::endl;
}

// Called repeatedly when this Command is scheduled to run
HatchServoExtend::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
HatchServoExtend::IsFinished() { 
  if(!Robot::m_ballDispenser->getOpenStatus()){
    return true;
  }
  else{
    return false; 
  }
}
// Called once after isFinished returns true
HatchServoExtend::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
voHaHatchServoExtendtch::Interrupted() {}
