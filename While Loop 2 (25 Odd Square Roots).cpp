#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double counter = 1, square = 1;
    while (counter <= 25){
        cout << counter << " "  << square << " " << sqrt(square) << endl;
        square += 2;
        counter++;
    }
    return 0;
}
