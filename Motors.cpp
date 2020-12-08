#include "Motors.h"
#include "Arduino.h"

namespace motor
{
void motor_step(int MOTOR_PIN, unsigned long INTERVAL, int MOTOR_SPEED, int DIRECTION, int DIRECTION_PIN)
{
  int i = 0;
  if(DIRECTION == 1) 
  {
      digitalWrite(DIRECTION_PIN, HIGH);
    }
  if(DIRECTION == 0) 
  {
      digitalWrite(DIRECTION_PIN, LOW);
    }
  while (i < INTERVAL){
    digitalWrite(MOTOR_PIN, HIGH);
    delayMicroseconds(MOTOR_SPEED);
    digitalWrite(MOTOR_PIN, LOW);
    i = i + 1;
  }
}

void disable_motor(int MOTOR_ENABLE_PIN)
{ 

    if(MOTOR_ENABLE_PIN > -1) {
        digitalWrite(MOTOR_ENABLE_PIN,LOW);
    }
}



void enable_motor(int MOTOR_ENABLE_PIN)
{ 

    if(MOTOR_ENABLE_PIN > -1) {
        digitalWrite(MOTOR_ENABLE_PIN,HIGH);
    }
}

void initialize_motors(int NUMBER_OF_AXIS, int AXIS_PINS_ARRAY[][5])
{
    
    for(int i = 0; i <= NUMBER_OF_AXIS; i++)
        {
//             for(size_t j = 0; j < sizeof AXIS_PINS_ARRAY[i] / sizeof *AXIS_PINS_ARRAY[i]; ++j)
             for(int j = 0; j <= 5; ++j)
                {
                    int *pin = &AXIS_PINS_ARRAY[i][j];
                    pinMode(pin,OUTPUT);
                    digitalWrite(pin, LOW);
                    
                }
            i = i + 1;
        }
    
}

}