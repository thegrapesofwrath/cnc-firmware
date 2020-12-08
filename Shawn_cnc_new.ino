#include "Arduino.h"
#include "Pins.h"
#include "Motors.h"
int number_of_axis = 5; //initialize all of the axis even if they are not being used
/*
#define X_STEP_PIN         54
#define X_DIR_PIN          55*/
int x = 0;
int DELAY = 500;

int motor_axis_pins[5][5] = {
    {54,55,38,3,2},
    {60,61,56,14,15},
    {46,48,62,18,19},
    {26,28,24,-1,-1},
    {36,34,30,-1,-1}
};



void setup() {
  pinMode(FAN_PIN , OUTPUT);
  pinMode(SPINDLE_PIN , OUTPUT);
  pinMode(HEATER_1_PIN , OUTPUT);
  pinMode(LED_PIN  , OUTPUT);
  
  pinMode(X_STEP_PIN  , OUTPUT);
  pinMode(X_DIR_PIN    , OUTPUT);
  pinMode(X_ENABLE_PIN    , OUTPUT);
  
  pinMode(Y_STEP_PIN  , OUTPUT);
  pinMode(Y_DIR_PIN    , OUTPUT);
  pinMode(Y_ENABLE_PIN    , OUTPUT);
  
  pinMode(Z_STEP_PIN  , OUTPUT);
  pinMode(Z_DIR_PIN    , OUTPUT);
  pinMode(Z_ENABLE_PIN    , OUTPUT);
  
  pinMode(E_STEP_PIN  , OUTPUT);
  pinMode(E_DIR_PIN    , OUTPUT);
  pinMode(E_ENABLE_PIN    , OUTPUT);
  
  pinMode(Q_STEP_PIN  , OUTPUT);
  pinMode(Q_DIR_PIN    , OUTPUT);
  pinMode(Q_ENABLE_PIN    , OUTPUT);
  
   digitalWrite(X_ENABLE_PIN    , LOW);
   digitalWrite(Y_ENABLE_PIN    , LOW);
   digitalWrite(Z_ENABLE_PIN    , LOW);
   digitalWrite(E_ENABLE_PIN    , LOW);
   digitalWrite(Q_ENABLE_PIN    , LOW);
  
  motor::initialize_motors(5,motor_axis_pins);
  
}

void loop(){
    digitalWrite(SPINDLE_PIN,HIGH);
    while(x < 10000)
    {
        digitalWrite(X_DIR_PIN,HIGH);
        digitalWrite(X_STEP_PIN,HIGH);
        delayMicroseconds(DELAY);
        digitalWrite(X_STEP_PIN,LOW);
        x=x+1;
    }
    while(x > 0)
    {
        digitalWrite(X_DIR_PIN,LOW);
        digitalWrite(X_STEP_PIN,HIGH);
        delayMicroseconds(DELAY);
        digitalWrite(X_STEP_PIN,LOW);
        x=x-1;
    }

}