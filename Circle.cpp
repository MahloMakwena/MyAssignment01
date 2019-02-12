#include "Circle.h"

Circle::Circle(int r){
    radius = r;
}
double Circle::area(){
    // TODO: Calculate area of circle
    // PI is defined in Circle.h
    return PI*(radius*radius);

}
