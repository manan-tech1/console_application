#include "../headers/Circle.h"
#include <cmath>

// Constructor implementation
Shape::Circle::Circle(double radius) : mRadius(radius) {}

// Destructor implementation
Shape::Circle::~Circle() {}

// Area calculation implementation
double Shape::Circle::area() {
    return M_PI * mRadius * mRadius;
}

// Perimeter calculation implementation
double Shape::Circle::perimeter() {
    return 2 * M_PI * mRadius;
}

// Radius retrieval implementation
double Shape::Circle::radius() {
    return mRadius;
}
