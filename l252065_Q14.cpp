//#include<iostream>
//using namespace std;
//
//int main()
//{
//	double populationA, populationB;
//	float grow_populationA, grow_populationB;
//	int years = 0;
//    cout << "Enter Population of Town A: ";
//    cin >> populationA;
//
//    cout << "Enter Growth Rate of Town A IN %: ";
//    cin >> grow_populationA;
//
//    cout << "Enter Population of Town B: ";
//    cin >> populationB;
//
//    cout << "Enter Growth Rate of Town B in % ";
//    cin >> grow_populationB;
//
//    if (populationA < populationB && grow_populationA <= grow_populationB) {
//        cout << "Error: Town A will never surpass Town B because its growth rate is too low." << endl;
//    }
//    else {
//        while (populationA < populationB)
//        {
//            populationA = populationA + (populationA * grow_populationA / 100);
//            populationB = populationB + (populationB * grow_populationB / 100);
//            years++;
//        }
//
//        cout << "After " << years << " years:" << endl;
//        cout << "Population of Town A: " << populationA << endl;
//        cout << "Population of Town B: " << populationB << endl;
//    }
//    return 0;
//}
//
