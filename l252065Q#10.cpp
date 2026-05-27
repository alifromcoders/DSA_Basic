//#include<iostream>
//using namespace std;
//#include <cstdlib> 
//#include <ctime>  
//int main()
//{
//    srand(time(0));
//    int secret_Num = rand() % 50 + 1;
//    int guess;
//    int maxTurns = 5;
//    bool hasWon = false;
//
//
//    cout << "Welcome to the Number Guessing Game between 1 to 50!\n";
//    
//    cout << "You have " << maxTurns << " turns to find the hidden number" << endl;
//	int i = 1;
//    while ( i <= 5 && !hasWon) {
//        cout << "\nTurn " << i << ": Enter your guess: ";
//        cin >> guess;
//    
//    if (guess == secret_Num) {
//        cout << " You found it \n";
//        hasWon = true;
//    }
//    else
//    {
//        if (guess < secret_Num) {
//            cout << "Too low." << endl;
//        }
//        else
//        {
//            cout << "Too high." << endl;
//        }
//        i++; 
//    }
//}
//
//if (!hasWon)
//{
//    cout << "\nYOU LOSE! The number was: " << secret_Num << endl;
//
//}
//return 0;
//}
