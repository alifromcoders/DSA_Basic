//#include <iostream>
//using namespace std;
//int main()
//{
//    char ORIGINAL[4][7] = {
//        {'a','b','c','d','e','f','g'},
//        {'h','i','j','k','l','m','n'},
//        {'o','p','q','r','s','t','u'},
//        {'v','w','x','y','z',' ','.'}
//    };
//
//    char CODE[4][7] = {
//        {'q','a','m','t','c','h','u'},
//        {'e','w','d','p','z','b','i'},
//        {'k',' ','n','s','f','.','l'},
//        {'r','g','o','j','x','v','y'}
//    };
// char INPUT[50];
//    char ENCODE[50];
//    char RECOVERED[50];
// cout << "Enter a word: ";
//    cin >> INPUT;
//
//    int i = 0;
//    while (INPUT[i] != '\0')
//    {
//        char ch = INPUT[i];
//
//        int foundR = 0, foundC = 0;
// for (int r = 0; r < 4; r++)
//        {
//            for (int c = 0; c < 7; c++)
//            {
//                if (ORIGINAL[r][c] == ch)      // Encoding
//                {
//                    foundR = r;
//                    foundC = c;
//                }
//            }
//        }
//  ENCODE[i] = CODE[foundR][foundC];
//        i++;
//    }
//    ENCODE[i] = '\0';
// int j = 0;
//    while (ENCODE[j] != '\0')         // Decoding
//    {
//        char ch = ENCODE[j];
//        int r2 = 0;
//        int c2 = 0;
// for (int r = 0; r < 4; r++)
//        {
//            for (int c = 0; c < 7; c++)
//            {
//                if (CODE[r][c] == ch)
//                {
//                    r2 = r;
//                    c2 = c;
//                }
//            }
//        }
//
//        RECOVERED[j] = ORIGINAL[r2][c2];
//        j++;
//    }
//    RECOVERED[j] = '\0';
// cout << "Encoded Word: " << ENCODE << endl;
//    cout << "Decoded Word: " << RECOVERED << endl;
//
//    return 0;
//}
