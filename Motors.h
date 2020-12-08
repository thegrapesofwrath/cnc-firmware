#ifndef MOTORS_H
#define MOTORS_H
;
namespace motor{
void motor_step(int MOTOR_PIN, unsigned long INTERVAL, int MOTOR_SPEED, int DIRECTION, int DIRECTION_PIN); //DIRECTION -> 1 FORWARD | 0 -> BACKWARD
void disable_motor(int MOTOR_ENABLE_PIN);
void enable_motor(int MOTOR_ENABLE_PIN);
void initialize_motors(int NUMBER_OF_AXIS, int AXIS_PINS_ARRAY[][5]);
}
#endif /*Motors.h*/