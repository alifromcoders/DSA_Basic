//#include <iostream>
//#include <fstream>
//using namespace std;
//
//// Write fresh student record (overwrite file)
//void writeStudent()
//{
//    ofstream file("students.txt");
//
//    int roll, marks;
//    char name[50], subject[50];
//
//    cout << "Enter Roll Number: ";
//    cin >> roll;
//
//    cout << "Enter Student Name: ";
//    cin >> name;
//
//    cout << "Enter Subject: ";
//    cin >> subject;
//
//    cout << "Enter Marks: ";
//    cin >> marks;
//
//    file << roll << " " << name << " " << subject << " " << marks << endl;
//
//    file.close();
//}
//
//// Append a new record (add at bottom)
//void appendStudent()
//{
//    ofstream file("students.txt", ios::app);
//
//    int roll, marks;
//    char name[50], subject[50];
//
//    cout << "Enter Roll Number: ";
//    cin >> roll;
//    cout << "Enter Student Name: ";
//    cin >> name;
//    cout << "Enter Subject: ";
//    cin >> subject;
//cout << "Enter Marks: ";
//    cin >> marks;
//
//    file << roll << " " << name << " " << subject << " " << marks << endl;
//
//    file.close();
//}
//void readStudents()
//{
//    ifstream file("students.txt");
//
//    if (!file)
//    {
//        cout << "File not found. Please write a record first.\n";
//        return;
//    }
//
//    int roll, marks;
//    char name[50], subject[50];
//    bool found = false;
//
//    cout << "\nStudent Records:\n";
//
//    while (file >> roll >> name >> subject >> marks)
//    {
//        cout << roll << ", " << name << ", " << subject << ", " << marks << endl;
//        found = true;
//    }
//
//    if (!found)
//        cout << "No records found.\n";
//
//    file.close();
//}
//
//// Average marks for a specific subject
//void averageSubject()
//{
//    ifstream file("students.txt");
//
//    if (!file)
//    {
//        cout << "File not found. Please add records first.\n";
//        return;
//    }
//
//    char searchSub[50];
//    cout << "Enter Subject to calculate average: ";
//    cin >> searchSub;
//
//    int roll, marks;
//    char name[50], subject[50];
//
//    int sum = 0, count = 0;
//
//    while (file >> roll >> name >> subject >> marks)
//    {
//        // Compare subject strings manually (no strcmp allowed)
//        int i = 0, match = 1;
//        while (searchSub[i] != '\0' || subject[i] != '\0')
//        {
//            if (searchSub[i] != subject[i])
//                match = 0;
//            i++;
//        }
//
//        if (match == 1)
//        {
//            sum += marks;
//            count++;
//        }
//    }
//
//    if (count == 0)
//        cout << "No student found for this subject.\n";
//    else
//        cout << "Average Marks in " << searchSub << ": " << (sum / (float)count) << endl;
//
//    file.close();
//}
//
//int main()
//{
//    int choice;
//
//    do
//    {
//        cout << "\n=== Student Menu ===\n";
//        cout << "1. Write Student Record\n";
//        cout << "2. Append Student Record\n";
//        cout << "3. Read All Records\n";
//        cout << "4. Average Marks of Subject\n";
//        cout << "5. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1)
//            writeStudent();
//        else if (choice == 2)
//            appendStudent();
//        else if (choice == 3)
//            readStudents();
//        else if (choice == 4)
//            averageSubject();
//
//    } while (choice != 5);
//
//    return 0;
//}
