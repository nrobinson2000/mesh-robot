#include "Particle.h"

#include "Adafruit-MotorShield-V2.h"
#include "Adafruit_PWMServoDriver.h"


SYSTEM_MODE(MANUAL);

Adafruit_MotorShield motors;

Adafruit_DCMotor *myMotor;

void setup()
{
    motors.begin();

    myMotor = motors.getMotor(3);


    myMotor->setSpeed(100);
    myMotor->run(FORWARD);
}

void loop()
{
}