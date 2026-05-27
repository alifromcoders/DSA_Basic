//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//// Program reads 5 courses from grade.txt and calculates GPA. 
//
//
//double CalculateGPA()
//{
//    ifstream fin("grade.txt");
//
//    if (!fin)
//    {
//        cout << "Error: grade.txt not found" << endl;
//        return 0.0;
//    }
//
//    string grade;
//     double gradePoint;
//    int creditHours;
//
//    double totalQualityPoints = 0.0;
//    int totalCreditHours = 0;
//
//    for (int i = 1; i <= 5; i++)
//    {
//        fin >> grade >> gradePoint >> creditHours;
//
//        cout << "Course " << i << " ";
//        cout << "Grade = " << grade << ", ";
//        cout << "GradePoint = " << gradePoint << ", ";
//        cout << "CreditHours = " << creditHours << endl;
//
//                totalQualityPoints = totalQualityPoints + (gradePoint * creditHours);
//                             totalCreditHours = totalCreditHours + creditHours;
//    }
//
//                     fin.close();
//                     if (totalCreditHours == 0) 
//                     {
//                         cout << " Total credit hours is zero!" << endl;
//                         return 0.0;
//                     }
//         double gpa = totalQualityPoints / totalCreditHours;
//    return gpa;
//}
//
//int main()
//{
//                      double gpa = CalculateGPA();
//      cout << "Final GPA = " << gpa << endl;
//    return 0;
//}