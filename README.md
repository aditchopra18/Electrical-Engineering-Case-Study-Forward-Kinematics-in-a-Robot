# Electrical-Engineering-Case-Study-Forward-Kinematics-in-a-Robot
## Problem Identification and Statement
Our objective is to develop a program which simulates the movement of a multi degree of freedom kinematic chains which forms the structure of the robotic system. We assume that the chains are rigid rods and the joints are negligible and can provide translation or rotation in any direction. The user enters the number of segments, lengths of each segment, and angles between the two consecutive segments. The program outputs the end-effector (end coordinates of the last segment of the robot) and the joints location in between.

## Gathering Relevant Information
### Some Important Key-Words
A Segment of a robot is defined as a rigid entity present in between two joints. It has a Starting Point (x1,y1), Ending Point (x2,y2), Length (l), Angle (which can be measured in radians or degrees and can be measured with respect to the previous arms or with the positive x-axis).

For simplicity purposes all robots' first segment's (called as the 'Root Segment') starting point is the Origin (0,0).

A robot can have multiple segments, called as the Degrees of Freedom.

The End-Effector of a robot is defined as the end-point of the last segment in a robot. In order to find the end-effector of a robot, the positions of the end-points of all the intermediate segments, their angles (with positive x-axis or with their previous arms) must be known. 

### Theory
For this project, a robot is simply a chain of segments connected through joints. To achieve a robot system, we first establish a fixed co-ordinate system which is the “Base Frame” to which all objects are referenced to. Suppose we assume (x0, y0) as the starting point of our robot system, and we have a two-link planar robot as shown below:

<>

Then the co-ordinates of (x2,y2) is: 

<>

where α1 and α2 are the lengths of the two segments of the robot.\
Note that the entire process is called as "Forward Kinematics"

## Input/Output Description
The following diagram describes the Input/Output description 

<>

## Test Cases
### Test Case 1: Invalid number of Test Cases
Enter the number of Segments: -2 *(Robot can’t have -ve number of arms)*\
INVALID!\
Enter the number of Segments once again: -5 *(Robot can’t have -ve number of arms)*\
INVALID!\
Enter the number of Segments once again: -7 *(Robot can’t have -ve number of arms)*\
INVALID!\
Enter the number of Segments once again: 2 *(Valid Input)*\
Enter length of Segment 1 : 12\
Enter corresponding angle in radians 0 : 0.57\
Enter length of Segment 2 : 19\
Enter corresponding angle in radians 1 : 0.45\
10.1028 5.75311\
27.2113 14.7399

### Test Case 2: Almost a Perpendicular Robot
Enter the number of Segments: 4 *(Valid Input)*\
Enter length of Segment 1 : 12 *(Length of first segment)*\
Enter corresponding angle in radians 0 : 1.57 *(Angle of first segment with x-axis)*\
Enter length of Segment 2 : 15 *(Length of second segment)*\
Enter corresponding angle in radians 1 : 0 *(Angle of second segment with x-axis)*\
Enter length of Segment 3 : 17 *(Length of third segment)*\
Enter corresponding angle in radians 2 : 0 *(Angle of third segment with x-axis)*\
Enter length of Segment 4 : 21 *(Length of fourth segment)*\
Enter corresponding angle in radians 3 : 0 *(Angle of fourth segment with x-axis)*\
0.009 12\
15.0096 12\
32.0096 12\
53.0096 12

### Test Case 3: Straigt Line Robot
Enter the number of Segments: 5 *(Valid Input)*\
Enter length of Segment 1 : 12 (Length of first segment)
Enter corresponding angle in radians 0 : 0.45 (Angle of first segment with x-axis)
Enter length of Segment 2 : 28 (Length of second segment)
Enter corresponding angle in radians 1 : 0.45 (Angle of second segment with x-axis)
Enter length of Segment 3 : 15 (Length of third segment)
Enter corresponding angle in radians 2 : 0.45 (Angle of third segment with x-axis)
Enter length of Segment 4 : 19 (Length of fourth segment)
Enter corresponding angle in radians 3 : 0.45 (Angle of fourth segment with x-axis)
Enter length of Segment 5 : 9 ((Length of fifth segment)
Enter corresponding angle in radians 4 : 0.45 (Angle of fifth segment with x-axis)
10.8054 5.21959\
36.0179 17.3986\
49.5246 23.9231\
66.6331 32.1874\
74.7371 36.1021

## User Guide
The program creates a multi-degree of freedom of robot which has the user's desired degrees of freedom. The number of segments, their respective lengths and their angles (in radians) with the positive x-axis is taken as input and the all joints' location along with the End-Effector is printed.  
