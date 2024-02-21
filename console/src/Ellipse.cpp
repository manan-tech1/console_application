#include "../headers/Ellipse.h"
#include <cmath>
using namespace Shape;

// Constructor implementation
Shape::Ellipse::Ellipse(double majorAxis, double minorAxis)
    : mMajorAxis(majorAxis), mMinorAxis(minorAxis) {}

// Destructor implementation
Shape::Ellipse::~Ellipse() {}

// Area calculation implementation
double Shape::Ellipse::area() {
    return M_PI * mMajorAxis * mMinorAxis;
}

// Perimeter calculation implementation (Approximation using Ramanujan's formula)
double Ellipse::perimeter()
{
    double perimetereOfEllipse = (mMajorAxis * mMajorAxis) + (mMinorAxis * mMinorAxis);
    perimetereOfEllipse = perimetereOfEllipse / 2;
    perimetereOfEllipse = 2 * M_PI * sqrt(perimetereOfEllipse);
    return perimetereOfEllipse;
}

