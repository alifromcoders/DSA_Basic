#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream fin;
    ofstream fout;
    string word;
    int count = 0;

    fin.open("abc.txt", ios::in);

    if (!fin) {
        cout << "Error: Cannot open abc.txt for reading!" << endl;
        return 1;
    }

    fout.open("out.txt", ios::out);

    if (!fout) 
    {
        cout << "Error: Cannot open out.txt for writing!" << endl;
        fin.close();
        return 1;
    }

    cout << "Processing file..." << endl;

    while (!fin.eof()) 
    {
        fin >> word;
        if (fin)
             {
            count++;
            fout << count << ": " << word << endl;
            cout << "Copied word " << count << ": " << word << endl;
        }
    }

    fin.close();
    fout.close();

    cout << " Total words processed: " << count << endl;

    return 0;
}