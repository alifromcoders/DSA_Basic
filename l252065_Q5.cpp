//#include <iostream>
//using namespace std;
//
//
//
//
//void frequency(int arr[], int size) {
//
//	for (int i = 0; i < size; i++)
//	{
//		bool isrepeated = false;
//		for (int k = 0; k < i; k++)
//		{
//			if (arr[i] == arr[k])
//			{
//				isrepeated = true;
//				break;
//			}
//		}
//		if (isrepeated == true)
//		{
//			continue;
//		}
//		int count = 0;
//
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		cout << arr[i] << " occurs " << count << " times" << endl;
//	}
//}
//
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//
//
//	int arr[] = { 1, 2, 2, 3, 1, 2 };
//
//	int size = sizeof(arr) / sizeof(int);
//
//	frequency(arr, size);
//	return 0;
//
//}