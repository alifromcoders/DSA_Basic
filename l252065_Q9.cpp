//#include <iostream> 
//using namespace std;
//
//int main() {
//	double liters, kilometers, average, consumption;
//	
//	double totalLiters = 0;
//	double totalKilometers = 0;
//	
//	cout << "eneter liters:\n";
//	cin >> liters;
//	while (liters != -1)
//	{
//		cout << "eneter kilometers:\n";
//		cin >> kilometers;
//
//
//		totalLiters = totalLiters + liters;
//		totalKilometers = totalKilometers + kilometers;
//		if (kilometers > 0) {
//			consumption = (liters / kilometers) * 100;
//			cout << "The liters/100km for this tank was  \n " << consumption;
//		}
//
//		else {
//			cout << "Kilometers cannot be zero";
//		}
//
//		cout << "Enter the liters used (-1 to end):\n ";
//		cin >> liters;
//	}
//
//
//if (totalKilometers > 0) { 
//	average = (totalLiters / totalKilometers) * 100; 
//	cout << "The overall average consumption was: " << average << endl;
//}
//else 
//{ 
//	cout << "No data entered" << endl; 
//}
//
//return 0; 
//}