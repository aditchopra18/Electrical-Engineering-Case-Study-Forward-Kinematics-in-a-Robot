// Including all the major header files
#include <iostream>
#include <cmath>

// Using standard namespace
using namespace std;

// Defining the Point class
class Point
{
    // Declaring the private data types
    private:
        double x;
        double y;
    
    // Declaring the public data types
    public:
        
        // Declaring the constructor with default initialized values
        Point()
        {
            x=0;
            y=0;
        }
        
        // Declaring another constructor which has two parameters "x_cor" and "y_cor" of double data type
        Point(double x_cor, double y_cor)
        {
            // Storing the values passed into x_cor and y_cor into the private variables of Point class
            x = x_cor;
            y = y_cor;
        }

        // Getter function of x
        double getx()
        {
            return x;
        }

        // Getter function of y
        double gety()
        {
            return y;
        }

        // Setter function of x
        void setx(double xco)
        {
            x = xco;
        }

        // Setter function of y
        void sety(double yco)
        {
            y = yco;
        }
};