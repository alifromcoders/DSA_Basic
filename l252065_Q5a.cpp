//#include <iostream>
//using namespace std;
//void findDuplicates(int arr[], int n) {
//    cout << "Duplicate Patient IDs ";
//    for (int i = 0; i < n; i++)
//    {
//        int val = arr[i];
//        if (val < 0)
//            val = -val;
//        int in = val - 1;
//        if (arr[in] < 0) 
//            cout << val << " ";
//    
//        else 
//            arr[in] = -arr[in];            
//    }
//    cout << endl;
//}
//
//        int main()
//        {
//
//            int arr[] = { 5, 1, 4, 2, 3, 2, 6, 5 };
//            int n = 8;
//           
//           findDuplicates(arr,n);
//
//           
//            return 0;
//        }
//    