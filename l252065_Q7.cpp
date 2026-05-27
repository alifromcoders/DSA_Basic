#include <iostream> 
using namespace std;

int main() {

    int num1 = 0, num2 = 0, product = 0, count = 0;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;


    if (num1 < 0 || num2 < 0)
    {
        cout << "Error: Negative numbers  not allowed" << endl;
        return 0;
    }
    while (count < num2)
    {
        product = product + num1;
        count = count + 1;
    }
    cout << "product is\n" << product;
    return 0;
}
