#include 'Motors_new.h'
#include <cmath>

// = 0b01100011; //  XSTEP XDIR YEN N/A N/A N/A YSTEP YDIR | O - INPUT / 1 - OUTPUT
using gcode = float;
using binary = int;


class XY {
    
    binary low_pin_state ;
    
public:
    
    XY (binary x) { low_pin_state = x; }
    
    plane_movement(gcode x0, gcode y0, gcode x1, gcode y1){
        
        if (x1 >= x0 and y1 >= y0){
            
            auto delta_x = x1 - x0;
            auto delta_y = y1 - y0;
            auto D = delta_y - delta_x;
            auto y = y0;
            for (auto )
            
            
        }
        
        
    }
    
}