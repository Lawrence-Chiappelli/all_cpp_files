//Lawrence Chiappelli

// STRING LENGTH


#include <iostream>
#include <string>
using namespace std;

​

// Function prototype
int stringLength(char *);

​

int main()
{
    // Constant for the array size
    const int arraySize = 80;

​

        // An array to hold a string
    char arrayString[arraySize];

​

        // Get a string from the user.
        cout << "Enter a string of 80 characters "
        << "or less: \n";
        cin.getline(arrayString, arraySize);

​

        // Use the stringLength function to get the 
        // length of the string. Display the length.
        cout << "Length of " << arrayString << ": " << stringLength(arrayString) << endl;

​

        return 0;
}

​

// ********************************************************
// The stringLength function accepts a pointer to a       *
// C-string and returns the number of characters in the   *
// string.                                                *
// ********************************************************

​

int stringLength(char *str)
{
    // The length of the string
    int stringLength2 = 0;

​

        // Step through the string until the 
        // null character is found.
    for (int i = 0; i < 80; i++)
    {
        if (str[i] == NULL)
            break;
        else
            stringLength2++;
    }


        // Return the length.
        return stringLength2;
}
