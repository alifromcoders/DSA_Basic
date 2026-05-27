//#include <iostream>
//using namespace std;
//void inputScores(int scores[][5], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Enter marks of 5 subjects for student " << i + 1 << ": ";
//        for (int j = 0; j < 5; j++)
//        {
//            cin >> scores[i][j];
//        }
//    }
//}
//void computeAverages(int scores[][5], int n, float averages[])
//{
//    for (int i = 0; i < n; i++)
//    {
//        int sum = 0;
//        for (int j = 0; j < 5; j++)
//        {
//            sum = sum + scores[i][j];
//        }
//        averages[i] = sum / 5.0;
//    }
//}
//int findTopper(float averages[], int n)
//{
//    int maxIndex = 0;
//    for (int i = 1; i < n; i++)
//    {
//        if (averages[i] > averages[maxIndex])
//        {
//            maxIndex = i;
//        }
//    }
//    return maxIndex;
//}
//void printStudent(int scores[][5], int index)
//{
//    cout << "Marks of topper (Student " << index + 1 << "): ";
//    for (int j = 0; j < 5; j++)
//    {
//        cout << scores[index][j] << " ";
//    }
//    cout << endl;
//}
//int main()
//{
//    int n;
//    cout << "Enter number of students: ";
//    cin >> n;
//
//    int scores[50][5];
//    float averages[50];
//
//    inputScores(scores, n);
//    computeAverages(scores, n, averages);
//
//    int topper = findTopper(averages, n);
//    printStudent(scores, topper);
//
//    return 0;
//}
