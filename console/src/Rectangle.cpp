#include "../headers/Rectangle.h"

// Constructor implementation
Shape::Rectangle::Rectangle(double length, double breadth)
    : mLength(length), mBreadth(breadth) {}

// Destructor implementation
Shape::Rectangle::~Rectangle() {}

// Area calculation implementation
double Shape::Rectangle::area() {
    return mLength * mBreadth;
}

// Perimeter calculation implementation
double Shape::Rectangle::perimeter() {
    return 2 * (mLength + mBreadth);
}