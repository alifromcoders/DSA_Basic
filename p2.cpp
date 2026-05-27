//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//    int x1, x2, x3, x4, x5, x6, x7, x8, x9;
//
//
//    cout << "Enter values (0  is Player 1, 1  is Player 2)" << endl;
//    cout << "x1, x2, x3: ";
//    cin >> x1 >> x2 >> x3;
//
//    cout << "x4, x5, x6: ";
//    cin >> x4 >> x5 >> x6;
//
//    cout << "x7, x8, x9: ";
//    cin >> x7 >> x8 >> x9;
//
//    cout << endl;
//    cout << x1 << "    " << x2 << "   " << x3 << endl;
//    cout << x4 << "    " << x5 << "   " << x6 << endl;
//    cout << x7 << "    " << x8 << "   " << x9 << endl;
//
//    if (x1 == x2 && x2 == x3)
//    {
//        if (x1 == 0)
//            cout << "Player 1 has won" << endl;
//        else
//            cout << "Player 2 has won" << endl;
//        return 0;
//    }
//
//    else if (x4 == x5 && x5 == x6)
//    {
//        if (x4 == 0)
//            cout << "Player 1 has won" << endl;
//        else
//            cout << "Player 2 has won" << endl;
//        return 0;
//    }
//    else if (x7 == x8 && x8 == x9)
//    {
//        if (x7 == 0)
//            cout << "Player 1 has won" << endl;
//        else
//            cout << "Player 2 has won" << endl;
//        return 0;
//    }
//
//    else if (x1 == x5 && x5 == x9)
//    {
//        if (x1 == 0)
//            cout << "Player 1 has won" << endl;
//        else
//            cout << "Player 2 has won" << endl;
//        return 0;
//    }
//    else if (x3 == x5 && x5 == x7)
//    {
//        if (x3 == 0)
//            cout << "Player 1 has won" << endl;
//        else
//            cout << "Player 2 has won" << endl;
//        return 0;
//    }
//    else {
//        cout << "No winner detected." << endl;
//    }
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int num1, num2;
//    int i;
// cout << " Enter the numbers  :  \n ";
//    cin >> num1 >> num2;
//  if (num1 > num2)
//    {
//
//        cout << "Error: num1 should be less than or equal to num2";
//
//    }
//
//    else
//    {
//  for (i = num1; i <= num2; i++)
//        {
//            cout << i;
// if (i < num2)
//            {
//                cout << ", ";  
//            }
//        }
//
//    }
//
//    return 0;
//}