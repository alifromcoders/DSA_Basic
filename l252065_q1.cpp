//#include <iostream>
//#include <fstream>
//using namespace std;
//void writeEmployee() // Function to write first employee data (overwrite file)
//{
//    ofstream file("employees.txt");
//    int id, salary;
//    char name[50], dept[50];
//    cout << "Enter Employee ID: ";
//    cin >> id;
//    cout << "Enter Name: ";
//    cin >> name;
//    cout << "Enter Department: ";
//    cin >> dept;
//cout << "Enter Monthly Salary: ";
//    cin >> salary;
//file << id << " " << name << " " << dept << " " << salary << endl;
//
//    file.close();
//}
//void appendEmployee()        // Function to append more employees
//{
//    ofstream file("employees.txt", ios::app);
//
//    int id, salary;
//    char name[50], dept[50];
//
//    cout << "Enter Employee ID: ";
//    cin >> id;
//
//    cout << "Enter Name: ";
//    cin >> name;
//
//    cout << "Enter Department: ";
//    cin >> dept;
//
//    cout << "Enter Monthly Salary: ";
//    cin >> salary;
//
//    file << id << " " << name << " " << dept << " " << salary << endl;
//
//    file.close();
//}
//
//// Function to read and show all employee records
//void readEmployees()
//{
//    ifstream file("employees.txt");
//
//    int id, salary;
//    char name[50], dept[50];
//
//    cout << "\nEmployee Records:\n";
//
//    while (file >> id >> name >> dept >> salary)
//    {
//        cout << id << ", " << name << ", " << dept << ", " << salary << endl;
//    }
//
//    file.close();
//}
//
//// Function to calculate total annual payroll
//void totalAnnualPayroll()
//{
//    ifstream file("employees.txt");
//
//    int id, salary;
//    char name[50], dept[50];
//    int total = 0;
//
//    // read each record
//    while (file >> id >> name >> dept >> salary)
//    {
//        total += (salary * 12);
//    }
//
//    cout << "\nTotal Annual Payroll: " << total << endl;
//
//    file.close();
//}
//
//int main()
//{                                  //input/output file name: employees.txt
//    int choice; 
// do
//    {
//        cout << "\n        === Payroll Menu ===        \n";
//        cout << "1. Write Employee Record\n";
//        cout << "2. Append Employee Record\n";
//        cout << "3. Read All Records\n";
//        cout << "4. Total Annual Payroll\n";
//        cout << "5. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
// if (choice == 1)
//            writeEmployee();
//        else if (choice == 2)
//            appendEmployee();
//        else if (choice == 3)
//            readEmployees();
//        else if (choice == 4)
//            totalAnnualPayroll();
//
//    } while (choice != 5);
//
//    return 0;
//}
