//#include <iostream>
//using namespace std;
//void inputMatrix(int matrix[][5], int N)
//{
//    int i, j;
//    for (i = 0; i < N; i++){
//        for (j = 0; j < N; j++)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//}void sumDiagonals(int matrix[][5], int N, int& mainDiagSum, int& antiDiagSum)
//{
//    int i;
//    mainDiagSum = 0;
//    antiDiagSum = 0;
//
//    for (i = 0; i < N; i++)
//    {
//        mainDiagSum = mainDiagSum + matrix[i][i];
//        antiDiagSum = antiDiagSum + matrix[i][N - 1 - i];
//    }
//}
//
//int main()
//{
//    int N;
//    cout << "Enter size: ";
//    cin >> N;
//
//    int matrix[5][5];
//    int mainSum, antiSum;
//
//    cout << "Enter matrix:\n";
//    inputMatrix(matrix, N);
//
//    sumDiagonals(matrix, N, mainSum, antiSum);
//
//    cout << "Main Diagonal = " << mainSum << endl;
//    cout << "Anti Diagonal = " << antiSum << endl;
//}
