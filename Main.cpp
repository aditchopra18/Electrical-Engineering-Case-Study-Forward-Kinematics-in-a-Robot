// Including all the major header files
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>	
#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "Segment.h"
#include "Robot.h"

// Using namespace standard
using namespace std;

// Main function
int main ()
{
    // Initializing integer variables seg, flag and index is declared as 0 
    int seg;
    int index = 0;
    int flag;

    // Initializing robot class as null
    Robot *darth_vader = NULL;

    // Taking the user input of the number of segments in the robot system
    cout << "Enter the number of Segments: ";
    cin >> flag;

    // Checking that the number of segments enterd by the user is actually positive
    if (flag < 0)
    {
        while (flag < 0)
        {
            cout << "INVALID!!" << endl;
            cout << "Enter the number of Segments once again: ";
            cin >> flag;
        }
    }

    // Declaring two arrays of data type double- l_seg and a_flag 
    double l_seg[flag];
    double a_seg[flag];
    
    // Declaring integer variable i
    int i;

    // Taking the user's input for length and angle and storing it in the arrays l_seg and a_seg
    for (i=0; i<flag; i++)
    {
        cout<<"Enter length of Segment "<<i+1<<" : ";
        cin>>l_seg[i];
        cout<<"Enter corresponding angle in radians "<<i<<" : ";
        cin>>a_seg[i];
    }

    // Repeat until we reach the end of user's input
    for (i=0; i < flag; i++)
    {
        if (index == 0)
        {
            // This is the root segment
            Segment *root = new Segment (Point(0,0), a_seg[0], l_seg[0]);
            darth_vader = new Robot(root);
            index++;
        }

        else if (index != 0)
        {
            // The segment considered by the loop is not the root segment
            darth_vader -> insert_Segment(a_seg[i], l_seg[i]);
        }
    }

    // Print all the segment data we got
    darth_vader -> print_Segments();

    // Returning the value 0 finally
    return (0);
}