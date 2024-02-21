namespace Shape
{
    class Circle
    {
    public:
        // Constructor: Initializes the circle with a given radius
        Circle(double radius);

        // Destructor: Cleans up resources, if necessary
        ~Circle();

        // Member function to calculate and return the area of the circle
        double area();

        // Member function to calculate and return the perimeter of the circle
        double perimeter();

        // Member function to retrieve the radius of the circle
        double radius();

    private:
        // Private member variable to store the radius of the circle
        double mRadius;
    };
}
