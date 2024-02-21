#include "../headers/Triangle.h"
#include <cmath>

// Constructor implementation
Shape::Triangle::Triangle(double side1, double side2, double side3)
    : mSide1(side1), mSide2(side2), mSide3(side3) {}

// Destructor implementation
Shape::Triangle::~Triangle() {}

// Area calculation implementation (using Heron's formula)
double Shape::Triangle::area() {
    double s = (mSide1 + mSide2 + mSide3) / 2;
    return sqrt(s * (s - mSide1) * (s - mSide2) * (s - mSide3));
}

// Perimeter calculation implementation
double Shape::Triangle::perimeter() {
    return mSide1 + mSide2 + mSide3;
}
