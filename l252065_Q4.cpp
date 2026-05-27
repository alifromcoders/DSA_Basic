#include <iostream>  
#include <fstream>   
using namespace std; 

const int c = 10;   


			void FileInput(int M1[][c], int M2[][c], int& r1, int& r2, int& c1, int& c2);

void Print(int M1[][c], int r, int c);

	void Print_Diagonals(int M1[][c], int r, int c);

		bool Add(int M1[][c], int M2[][c], int M3[][c], int r1, int r2, int c1, int c2, int& r3, int& c3);

bool Multiply(int M1[][c], int M2[][c], int r1, int r2, int c1, int c2);


	bool Sort_Columns(int M1[][c], int r, int c);



    int main()

    {
        int M1[10][10], M2[10][10], M3[10][10];
        int r1 = 0, c1 = 0, r2 = 0, c2 = 0, r3 = 0, c3 = 0;

        FileInput(M1, M2, r1, r2, c1, c2);

        cout << "Matrix 1" << endl;
        Print(M1, r1, c1);

        cout << "Matrix 2:" << endl;
        Print(M2, r2, c2);



        cout << "Diagonals:" << endl;
        Print_Diagonals(M1, r1, c1);

        if (Add(M1, M2, M3, r1, r2, c1, c2, r3, c3))
        {
            cout << "Addition Result" << endl;
            Print(M3, r3, c3);
        }

        if (Multiply(M1, M2, r1, r2, c1, c2))
        {
            cout << "Multiplication saved  Result.txt" << endl;
        }

        Sort_Columns(M1, r1, c1);
        cout << "Sorted Matrix 1:" << endl;
        Print(M1, r1, c1);

        return 0;
    }



        void FileInput(int M1[][c], int M2[][c], int& r1, int& r2, int& c1, int& c2)
        {
            ifstream fin("Matrix.txt");
            if (!fin)
            {
                cout << " Matrix.txt not found!" << endl;
                return;
            }
            fin >> r1 >> c1;
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    fin >> M1[i][j];
                }
            }
            fin >> r2 >> c2;
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    fin >> M2[i][j];
                }
            }
            fin.close();
        }
    

        void Print(int M1[][c], int r, int c) 
        {
             for (int i = 0; i < r; i++) 
            {
                for (int j = 0; j < c; j++)
                {
                    cout << M1[i][j] << " "; 
                }
                cout << endl;
            }
        }

                 void Print_Diagonals(int M1[][c], int r, int c)
        {
                      for (int diff = -(c - 1); diff <= r - 1; diff++) 
            {
                for (int i = 0; i < r; i++)
                {
                    int j = i - diff; 
                                 if (j >= 0 && j < c)
                    {
                        cout << M1[i][j] << " ";
                    }
                }
                cout << endl; 
            }
            for (int sum = 0; sum <= r + c - 2; sum++) 
            {
                  for (int i = 0; i < r; i++)
                {
                    int j = sum - i; 
                                 if (j >= 0 && j < c) 
                    {
                        cout << M1[i][j] << " "; 
                    }
                }
                cout << endl; 
            }
        }



                 bool Add(int M1[][c], int M2[][c], int M3[][c], int r1, int r2, int c1, int c2, int& r3, int& c3) 
                 {
                                 if (r1 != r2 || c1 != c2) 
                        {
                         return false; 
                     }
                     r3 = r1;
                     c3 = c1;
                     for (int i = 0; i < r1; i++) 
                     { 
                         for (int j = 0; j < c1; j++) 
                         {
                             M3[i][j] = M1[i][j] + M2[i][j]; 
                         }
                     }
                     return true; 
                 }

                 bool Multiply(int M1[][c], int M2[][c], int r1, int r2, int c1, int c2) 
                 {
                     if (c1 != r2)
                     {
                             return false; 
                     }
                      ofstream fout("Result.txt"); 
                     if     (!fout) 
                     {  
                                  cout << "Error!" << endl; 
                         return false;
                     }
                     fout << r1 << " " << c2 << endl; 
                     for (int i = 0; i < r1; i++)
                     {
                                  for (int j = 0; j < c2; j++) 
                         { 
                             int sum = 0;
                             for (int k = 0; k < c1; k++) 
                             {
                                 sum = sum + M1[i][k] * M2[k][j]; 
                             }
                             fout << sum << " "; 
                         }
                         fout << endl;
                     }
                     fout.close(); 
                     return true;
                 }

                                  bool Sort_Columns(int M1[][c], int r, int c)
                 {
                     for (int j = 0; j < c; j++) 
                     {  
                         for (int pass = 0; pass < r - 1; pass++) 
                         {
                                  for (int i = 0; i < r - 1 - pass; i++) 
                             {

                                  if (M1[i][j] > M1[i + 1][j]) 
                                 {
                                     int temp = M1[i][j]; 
                                     M1[i][j] = M1[i + 1][j]; 
                                     M1[i + 1][j] = temp; 
                                 }
                             }
                         }
                     }
                     return true; 
                 }