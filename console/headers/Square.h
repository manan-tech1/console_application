namespace Shape {
    class Square {
    public:
        // Constructor: Initializes the square with given side length
        Square(double length);

        // Destructor: Cleans up resources, if necessary
        ~Square();

        // Member function to calculate and return the area of the square
        double area();

        // Member function to calculate and return the perimeter of the square
        double perimeter();

    private:
        // Private member variable to store the side length of the square
        double mLength;
    };
}