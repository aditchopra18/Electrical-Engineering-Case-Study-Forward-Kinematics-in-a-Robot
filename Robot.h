// Including all the major header files
#include <iostream>
#include <cmath>

// Using standard namespace
using namespace std;

// Defining the Robot class 
class Robot
{
    // Declaring all the private variable types
    private:
        // Declaring the Pointer to root segment
        Segment *root;
        // Declaring the Pointer to the recent segment
        Segment *last;

    // Declaring all the public variable types
    public: 
        // Defining a constructor which has the default values of the variables
        Robot (Segment *croot)
        {
            root = croot;
            last = croot;
        }

        void insert_Segment(double angle, double length) 
        {
		//Getting the x and y coordinates of the last added segment
		
        double x = last -> getend().getx();
		double y = last -> getend().gety(); 
		
        //Creating new dynamic segment
		Segment* seg = new Segment(Point(x, y), angle, length);
		
        //Adding this new segment into the child of last added segment
		last -> setchild(seg);
		
        //last added segment in child is now updated as the above one
		last = seg;
	}
    
    void print_Segments()
    {
        // Printing the data in Segments
        Segment *current = root;
        Point SP;
        Point EP;
        double angle;
        double length;

        while (current!=NULL)
        {
            // Printing info
            SP = current -> getstart();
            EP = current -> getend();
            angle = current -> getangle();
            length = current -> getlength();

            // Printing End Point
            cout<<EP.getx()<<"\t"<<EP.gety()<<"\n";
            
            // Move to the next point 
            current = current -> getchild();

            if (current == NULL)
            {
                cout<<EP.getx()<<"\t"<<EP.gety();
            }
        }
    }

    void reset() 
    {
		//We reset all segments to x axis and angle = 0
		Segment *current = root;

        // If current is a null pointer r=then it does not point to any segent and is hence an Zero arm robot
		if (current == NULL) 
        {
			cout << "Zero Arm Robot" << endl;
		}

        // If the current is not null then we reset the current pointer and put it in the child class
		else 
        {
			while (current != NULL) 
            {
				current -> reset();
				current = current -> getchild();
			}
		}
	}
};