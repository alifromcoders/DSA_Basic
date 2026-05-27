//#include <iostream>
//using namespace std;
//void inputMatrix(int matrix[][5], int N) {
//    cout << "Enter elements of the matrix:\n";
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//}
//void rotate90Clockwise(int matrix[][5], int N) {
//
//    for (int i = 0; i < N; i++) {
//        for (int j = i; j < N; j++) {
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = temp;
//        }
//    }
// for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N / 2; j++) {
//            int temp = matrix[i][j];
//            matrix[i][j] = matrix[i][N - j - 1];
//            matrix[i][N - j - 1] = temp;
//        }
//    }
//}
//void displayMatrix(int matrix[][5], int N) {
//    cout << "Matrix after 90 degree clockwise rotation:\n";
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//int main() {
//    int N;
//    int matrix[5][5];
//
//    cout << "Enter size of matrix (N <= 5): ";
//    cin >> N;
//inputMatrix(matrix, N);
//    rotate90Clockwise(matrix, N);
//    displayMatrix(matrix, N);
// return 0;
//}