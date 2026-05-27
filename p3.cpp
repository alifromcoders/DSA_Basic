//#include <iostream>
//using namespace std;
//int main()
//{
//	int num ;
//	cout << "enter a number:";
//	cin >> num;
//	int orignalnum = num;
//	int reversenum = 0;// num_reminder = 0, rev_reminder;
//	int temp = num;
//	//bool check = true;
////	int realnum = num;
//	//int ini = 0, count = 0; //orignal
//	
//	while (temp > 0) {
//
//		int digit = temp % 10;
//		reversenum = (reversenum * 10) + digit;
//		temp = temp / 10;
//	}
//	/*cout << "reversed :  " << ini;
//	reversenum = ini;*/
//
//	int divisor = 1;
//	while (orignalnum / divisor >= 10) {
//		divisor = divisor % 10;
//	}
//	int count = 0;
//	bool stillmatching = true;
//	while(divisor > 0 && stillmatching==true) {
//		int d1 = (orignalnum / divisor) % 10; 
//		int d2 = (reversenum / divisor) % 10; 
//		//orignalnum = orignalnum / 10;
//		if(d1==d2) {
//			count++;
//			stillmatching = true;
//		}
//		else {
//			stillmatching = false;
//		}
//		
//		divisor = divisor / 10;
//	} 
//
//	cout << "output : "<<count << endl;
//
//	return 0;
//
//}