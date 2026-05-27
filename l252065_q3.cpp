#include <iostream>
using namespace std;

int main()
{
    int D;   // number of dives
 cout << "Enter number of dives: ";
    cin >> D;

    // Variables
    char region[50], waterMass[50], model[50], diveTag[50];
    int sampleCount;
    float value, total;

    cout << "\nOutput:\n";

    for (int i = 0; i < D; i++)
    {
        cout << "\nEnter Region Name: ";
        cin >> region;

        cout << "Enter WaterMass Type: ";
        cin >> waterMass;

        cout << "Enter Vehicle Model: ";
        cin >> model;

        cout << "Enter number of temperature samples: ";
        cin >> sampleCount;

        total = 0;
 cout << "Enter " << sampleCount << " temperature values:\n";
        for (int j = 0; j < sampleCount; j++)
        {
            cin >> value;
            total += value;
        }
 cout << "Enter Dive Tag: ";
        cin >> diveTag;
 cout << diveTag << "    " << waterMass << "    " << total << endl;
    }

    return 0;
}
