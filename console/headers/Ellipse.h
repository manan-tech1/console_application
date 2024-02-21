namespace Shape
{
    class Ellipse
    {
    public:
       // Constructor: Initializes the ellipse with given major and minor axes
        Ellipse(double majorAxis, double minorAxis);

        // Destructor: Cleans up resources, if necessary
        ~Ellipse();

        // Member function to calculate and return the area of the ellipse
        double area();

        // Member function to calculate and return the perimeter of the ellipse
        double perimeter();

    private:
        double mMajorAxis;
        double mMinorAxis;
    };
}