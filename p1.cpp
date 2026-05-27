//#include<iostream>
//using namespace std;
//int main()
//{
//    int num;
//    int l_Digit, c_Digit;
//    bool increasing = true;
//
//    cout << "Enter a positive number: ";
//    cin >> num;
//
//    if (num < 0)
//    {
//        cout << "Invalid Input";
//        return 0;
//    }
//
//    l_Digit = num % 10;
//    num = num / 10;
//
//    while (num > 0)
//    {
//        c_Digit = num % 10;
//
//        if (c_Digit >= l_Digit)
//        {
//            increasing = false;
//        }
//
//        l_Digit = c_Digit;
//        num = num / 10;
//    }
//
//    if (increasing)
//        cout << "Strictly Increasing Number";
//    else
//        cout << "Not a Strictly Increasing Number";
//
//    return 0;
//}