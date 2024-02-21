namespace Shape {
    class Rectangle {
    public:
        // Constructor: Initializes the rectangle with given length and breadth
        Rectangle(double length, double breadth);

        // Destructor: Cleans up resources, if necessary
        ~Rectangle();

        // Member function to calculate and return the area of the rectangle
        double area();

        // Member function to calculate and return the perimeter of the rectangle
        double perimeter();

    private:
        // Private member variables to store the length and breadth of the rectangle
        double mLength;
        double mBreadth;
    };
}