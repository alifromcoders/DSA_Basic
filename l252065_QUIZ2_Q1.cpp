#include <iostream>
using namespace std;

const int c = 10;

void Input(int M1[][c], int M2[][c], int& r1, int& r2, int& c1, int& c2);
void Print(int M1[][c], int r, int cols);
void Print_Diagonals(int M1[][c], int r, int cols);
bool Multiply(int M1[][c], int M2[][c], int r1, int r2, int c1, int c2);

int main()
{

    int Matrix1[10][c];
    int Matrix2[10][c];
    int row1, col1, row2, col2;

          Input(Matrix1, Matrix2, row1, row2, col1, col2);
    cout << "Diagonals of Matrix 1 " << endl;

          Print_Diagonals(Matrix1, row1, col1);
                 cout << "\nMultiplication Result:" << endl;
     Multiply(Matrix1, Matrix2, row1, row2, col1, col2);

    return 0;
}

void Input(int M1[][c], int M2[][c], int& r1, int& r2, int& c1, int& c2)
{
    cout << "Enter rows and columns for Matrix 1: ";
                cin >> r1 >> c1;
          cout << "Enter elements for Matrix 1 major in row:" << endl;
    for (int i = 0; i < r1; i++)
      {
        for (int j = 0; j < c1; j++)
        {
            cin >> M1[i][j];
        }
    }
         cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;
            cout << "Enter elements for Matrix 2 row order:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> M2[i][j];
        }
    }
}

     void Print(int M1[][c], int r, int cols)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }
}

// for primary and anti diagonals 
void Print_Diagonals(int M1[][c], int r, int cols)
{

    for (int col_St = cols - 1; col_St >= 0; col_St--) 
    
   {
        int i = 0;
        int j = col_St;

        while (i < r && j < cols)
        {
            cout << M1[i][j] << " ";
            i++;
            j++;
        }
        cout << endl;
    }

    // for the left mean below frow
    for (int rowSt = 1; rowSt < r; rowSt++)
    {
        int i = rowSt;
            int j = 0;
             while (i < r && j < cols)
        {
            cout << M1[i][j] << " ";
            i++;
            j++;
        }
        cout << endl;
    }

    cout << endl;

    int maxSum = (r - 1) + (cols - 1);

                    for (int sum = 0; sum <= maxSum; sum++)
    {
         int startRow = 0;
    
          if (sum >= cols)
        {
            startRow = sum - cols + 1;
        }

        int i = startRow;
        int j = sum - startRow;


        while (i < r && j >= 0)
        {
            cout << M1[i][j] << " ";
            i++; // for  down
            j--; // for left
        }
        cout << endl;
    }
}


bool Multiply(int M1[][c], int M2[][c], int r1, int r2, int c1, int c2)
{

    if (c1 != r2)  // check
    {
        cout << "Multiplication not possible." << endl;
        return false;
    }

    int Result[10][c];


    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            Result[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                Result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }


    Print(Result, r1, c2);
    return true;
}