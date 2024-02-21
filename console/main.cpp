// Include necessary headers
#include <iostream>
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Square.h"
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Ellipse.h"

// Using standard and Shape namespace for convenience
using namespace std;
using namespace Shape;

int main()
{
    // Variables for user input
    int choice;
    char choice1;

    // Main program loop
    do
    {
        // Display menu options
        cout << "Enter your choice \n 1 for Rectangle \n 2 for Square \n 3 for circle \n 4 for line \n 5 for triangle\n 6 for Ellipse";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Rectangle case
            double length, breadth;
            cout << "enter length and breadth \n";
            cin >> length >> breadth;
            Rectangle rectange1(length, breadth);
            cout << "Area of Rectangle is " << rectange1.area() << endl;
            cout << "Perimeter of Rectangle is " << rectange1.perimeter() << endl;
        }
        break;
        case 2:
        {
            // Square case
            double length;
            cout << "enter length square \n";
            cin >> length;
            Square square1(length);
            cout << "Area of square is " << square1.area() << endl;
            cout << "Perimeter of square is " << square1.perimeter() << endl;
        }
        break;
        case 3:
        {
            // Circle case
            double radius;
            cout << "enter radius for circle \n";
            cin >> radius;
            Circle circle1(radius);
            cout << "Area of circle is " << circle1.area() << endl;
            cout << "Perimeter of circle is " << circle1.perimeter() << endl;
        }
        break;
        case 4:
        {
            // Line case
            float x1cordinate, y1cordinate, x2cordinate, y2cordinate;
            cout << "enter 4 coordinates for line \n";
            cin >> x1cordinate >> y1cordinate >> x2cordinate >> y2cordinate;
            Line line1(x1cordinate, y1cordinate, x2cordinate, y2cordinate);
            cout << "Length of line is " << line1.lengthOfLine() << endl;
        }
        break;
        case 5:
        {
            // Triangle case
            double side1, side2, side3;
            cout << "Enter length of three sides of triangle \n";
            cin >> side1 >> side2 >> side3;
            Triangle triangle1(side1, side2, side3);
            cout << "Area of triangle is " << triangle1.area() << endl;
            cout << "Perimeter of Triangle is " << triangle1.perimeter() << endl;
        }
        break;
        case 6:
        {
            // Ellipse case
            double majorAxis, minorAxis;
            cout << "Enter value for semi-major axis and minor axis \n";
            cin >> majorAxis >> minorAxis;
            Ellipse ellipse1(majorAxis, minorAxis);
            cout << "Area of ellipse is " << ellipse1.area() << endl;
            cout << "Perimeter of ellipse is " << ellipse1.perimeter() << endl;
        }
        break;

        case 7:
            // Exit case
            exit(1);
            break;
        default:
        {
            // Default case for wrong choice
            cout << "Wrong choice";
        }
        break;
        }

        // Prompt to continue or exit
        cout << "Do you want to continue (y/n)?\n";
        cin >> choice1;

    } while (choice1 == 'y');

    return 0;
}
