#include "../headers/Square.h"

// Constructor implementation
Shape::Square::Square(double length) : mLength(length) {}

// Destructor implementation
Shape::Square::~Square() {}

// Area calculation implementation
double Shape::Square::area() {
    return mLength * mLength;
}

// Perimeter calculation implementation
double Shape::Square::perimeter() {
    return 4 * mLength;
}