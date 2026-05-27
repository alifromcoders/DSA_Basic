//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//int main()
//{
//	char character;
//	int letter_C = 0, space_C = 0, dot_C = 0;
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	
//	//if (!fout) {
//
//	//	cout << "Error Cannot create output.txt" << endl;
//
//	//	return 1;
//	//}
//	//if (!fin)
//	//{
//	//	cerr << "Error input text not found." << endl;
//	//	return 1;
//	//}/*
//	character = fin.get();
//
//
//	while (character != '\0')
//	{
//
//		if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
//		{
//
//			letter_C++;
//		}
//		else if (character == ' ')
//		{
//			space_C++;
//			//	character++;
//		}
//		else if (character == '.')
//		{
//			dot_C++;
//			//character++;
//		}
//
//		character = fin.get();
//	}
//	//cout << "Hello I am a student of FAST University." << character<< letter_C << space_C << dot_C;
//
//	fout << "No. of letters are " << letter_C << endl;
//
//	fout << "No. of spaces are: " << space_C << endl;
//
//	fout << "No. of full stops are: " << dot_C << endl;
//
//
//	fin.close();
//
//	fout.close();
//
//
//	return 0;
//
//
//}
//
//
