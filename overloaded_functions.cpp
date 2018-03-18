//Lawrence Chiappelli

// OVERLOADED FUNCTIONS


#include <iostream>
#include <iomanip>
using namespace std;

​

// Function prototypes
char getPatientType();
double patientCharges(int, double, double, double); // In-patient
double patientCharges(double, double);              // Out-patient



int main()
{
    char patientType;     // I=in-patient, O=out-patient
    int days;             // The number of days of stay
    double roomRate;     // The daily room rate
    double medication;   // Total medication charges
    double services;     // Total for tests and other services
    double totalCharges; // Total of all charges

                         // Get the patient type.
    patientType = getPatientType();

​

    if (patientType == 'I' || patientType == 'i')
    {
        cout << "Number of days in the hospital: " << endl;
        cin >> days;


        if (days < 0)
        {
            do
            {
                cout << "...number cannot be a negative.\nNumber of days in the hospital:" << endl;
                cin >> days;
            } while (days < 0);
        }

        cout << "Daily room rate:" << endl;
        cin >> roomRate;


        if (roomRate < 0)
        {
            do
            {
                cout << "...number cannot be a negative.\nDaily room rate:" << endl;
                cin >> roomRate;
            } while (roomRate < 0);
        }
            
    }


    cout << "Medication charges:" << endl;
    cin >> medication;


    if (medication < 0)
    {
        do
        {
            cout << "...number cannot be a negative.\nMedication charges:" << endl;
            cin >> medication;
        } while (medication < 0);
    }

    cout << "Service charges:" << endl;
    cin >> services;


    if (services < 0)
    {
        do
        {
            cout << "...number cannot be a negative.\nService charges:" << endl;
            cin >> services;
        } while (services < 0);
    }
        

        if (patientType == 'I' || patientType == 'i')
            totalCharges = patientCharges(days, roomRate, medication, services);
        else
            totalCharges = patientCharges(medication, services);


    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe total charges are $" << totalCharges << endl << endl;

​

    return 0;
}

​

char getPatientType()
{
    char patientType;

    cout << "What patient type are you? (I for in-patient, O for outpatient)" << endl;
    cin >> patientType;

    while (patientType != 'I' 
        && patientType != 'O'
        && patientType != 'i'
        && patientType != 'o')
    {
        cout << "...try again.\nWhat patient type are you? (I for in-patient, O for outpatient)" << endl;
        cin >> patientType;
    }

​

        return patientType;
}

​

double patientCharges(int days, double roomRate, double medication, double services)
{
    double total = ((medication + services) * roomRate) * days;
    return total;
}

​

double patientCharges(double medication, double services)
{
    double total = medication + services;
    return total;
}
