namespace Shape {
    class Triangle {
    public:
        // Constructor: Initializes the triangle with given side lengths
        Triangle(double side1, double side2, double side3);

        // Destructor: Cleans up resources, if necessary
        ~Triangle();

        // Member function to calculate and return the area of the triangle
        double area();

        // Member function to calculate and return the perimeter of the triangle
        double perimeter();

    private:
        // Private member variables to store the side lengths of the triangle
        double mSide1;
        double mSide2;
        double mSide3;
    };
}
