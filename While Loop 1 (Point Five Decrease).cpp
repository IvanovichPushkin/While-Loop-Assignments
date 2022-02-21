#include <iostream>

using namespace std;

int main()
{
    double xValue;
    cout << "Enter number higher than zero\n";
    cin >> xValue;
    cout << "The following numbers\n";
    while (xValue > 0){
        cout << xValue << endl;
        xValue -= 0.5;
    }
    return 0;
}
