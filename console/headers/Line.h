namespace Shape
{
    class Line
    {
    public:
        // Constructor: Initializes the line with coordinates of two points
        Line(float x1Coordinate, float y1Coordinate, float x2Coordinate, float y2Coordinate);

        // Destructor: Cleans up resources, if necessary
        ~Line();

        // Member function to calculate and return the length of the line
        float lengthOfLine();

    private:
        // Private member variables to store coordinates of two points
        float mX1Coordinate;
        float mY1Coordinate;
        float mX2Coordinate;
        float mY2Coordinate;
    };
}