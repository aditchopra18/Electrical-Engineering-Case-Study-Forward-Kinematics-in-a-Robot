// Including all the major header files
#include <iostream>
#include <cmath>

// Using standard namespace
using namespace std;

// Defining the Segment class
class Segment
{
    // Declaring the private data types
    private:
        double angle; // The angle here is stored in radians
        double length;
        Point start;
        Point end;
        Segment *child; // This is the pointer which stores the child segments

    // Declaring the public data types
    public:
        
        // Declaring a constructor for the default values of the data types 
        Segment (Point s, double a=0, double l=0)
        {
            angle = a;
            length = l;
            start = s;
            end = find_end_point (a, l, s);
            child = NULL;
        }

        // Getter function for start point
        Point getstart()
        {
            return start;
        }

        // Getter function of angle (in radians)
        double getangle()
        {
            return angle;
        }

        // Getter function for length 
        double getlength()
        {
            return length;
        }

        // Setter function for the start point
        void setstart(Point start_po)
        {
            start = start_po;
            // We call the find_end_point function to find the new point 
            end = find_end_point (angle, length, start_po);
        } 

        // Setter function of the angle (in radians)
        void setangle(double a)
        {
            angle = a;
            // We call the find_end_point function to find the new point
            end = find_end_point (a, length, start);
        }

        // Setter function of length
        void setlength(double l)
        {
            length = l;
            // We call the find_end_point function to find the new point
            end = find_end_point (angle, l, start);
        }

        // Function which actually finds the end-point of one segment
        Point find_end_point(double angle, double length, Point start)
        {
            double x_end = length * cos (angle) + start.getx();
            double y_end = length * sin (angle) + start.gety();
            return Point (x_end, y_end);
        }

        // Member-Getter function for child segment (For the pointer in Segment class)
        Segment *getchild()
        {
            return child;
        }

        // Setter for child segment
        void setchild(Segment *chi)
        {
            child = chi;
        }

        // Member-Getter function for end point
        Point getend()
        {
            return end;
        }

        // Resetting the segment to x axis
        void reset()
        {
            setstart(Point(abs(start.getx()), 0));
            setangle(0);
        }

        // Making the private variables accessible of Segment class in the Robot class
        friend class Robot;
};