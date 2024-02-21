#include "../headers/Line.h"
#include <cmath>

// Constructor implementation
Shape::Line::Line(float x1Coordinate, float y1Coordinate, float x2Coordinate, float y2Coordinate)
    : mX1Coordinate(x1Coordinate), mY1Coordinate(y1Coordinate),
      mX2Coordinate(x2Coordinate), mY2Coordinate(y2Coordinate) {}

// Destructor implementation
Shape::Line::~Line() {}

// Length calculation implementation

float Shape :: Line::lengthOfLine()
{
    float xValue = (mX2Coordinate - mX1Coordinate) * (mX2Coordinate - mX1Coordinate);
    float yValue = (mY2Coordinate - mY1Coordinate) * (mY2Coordinate - mY1Coordinate);
    float len = sqrtf(xValue + yValue);
    return len;
}
