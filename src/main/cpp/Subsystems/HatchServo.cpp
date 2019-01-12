/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/HatchServo.h"
#include "../../include/RobotMap.h"


//#include "Commands/CloseBallServo.h"

HatchServo::HatchServo() : Subsystem("HatchServo"), servo(new Servo(3)), isOpen(false){}


void HatchServo::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());

  //SetDefaultCommand(new CloseBallServo());
}

bool HatchServo::getOpenStatus() {
    return isOpen;
}

void HatchServo::switchOpenStatus() {
    if(isOpen){
      isOpen = false;
    }
    else{
      isOpen = true;
    }
}

void HatchServo::setPosition(double pos){
    servo->Set(pos);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
