//Lawrence Chiappelli
// RECTANGULAR AREA


#include <iostream>
using namespace std;


double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

​

int main()
{
   double length = 0,    // The rectangle's length
          width = 0,     // The rectangle's width
          area;      // The rectangle's area
          
 
   length = getLength(length);   // Get the rectangle's length.
   width = getWidth(width);        // Get the rectangle's width.
   area = getArea(length, width);   // Get the rectangle's area.   
   displayData(length, width, area);   // Display the rectangle's data.
          
   return 0;
}

​

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************

​

double getLength(double newLength)
{
    cout << "Enter the length: \n";
    cin >> newLength;
    return newLength;
}

​

double getWidth(double newWidth)
{
    cout << "Enter the width: \n";
    cin >> newWidth;
    return newWidth;
}

​

double getArea(double newLength, double newWidth)
{
    return newLength * newWidth;
}

​

void displayData(double lengthArea, double widthArea, double finalArea)
{
    cout << "The length was: " << lengthArea
        << "\nThe width was : " << widthArea
        << "\nThe area is   : " << finalArea
        << endl;
}
