#ifndef PINS_H
#define PINS_H

//Ramps 1.4 Pinout from http://www.reprap.org/wiki/RAMPS_1.4

//STEP_PIN DIR_PIN ENABLE_PIN MIN_PIN MAX_PIN use -1 if pin is not used

//X AXIS {54,55,38,3,2}
//Y AXIS {60,61,56,14,15}
//Z AXIS {46,48,62,18,19}
//EXTRUDER 1 {26,28,24,-1,-1}
//EXTRUDER 2 {36,34,30,-1,-1}
// #define motor_axis_pins[5][5] = {{54,55,38,3,2},{60,61,56,14,15},{46,48,62,18,19},{26,28,24,-1,-1},{36,34,30,-1,-1}}
// const int motor_axis_pins[5][5] = {
//     {54,55,38,3,2},
//     {60,61,56,14,15},
//     {46,48,62,18,19},
//     {26,28,24,-1,-1},
//     {36,34,30,-1,-1}
// }


#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E_STEP_PIN         26
#define E_DIR_PIN          28
#define E_ENABLE_PIN       24

#define Q_STEP_PIN         36
#define Q_DIR_PIN          34
#define Q_ENABLE_PIN       30

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13

#define FAN_PIN            9

#define PS_ON_PIN          12
#define KILL_PIN           -1

#define SPINDLE_PIN       10
#define HEATER_1_PIN       8
#define TEMP_0_PIN          13   // ANALOG NUMBERING
#define TEMP_1_PIN          14   // ANALOG NUMBERING

#endif /*Pins.h*/