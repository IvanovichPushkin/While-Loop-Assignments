#include <iostream>

using namespace std;

int main()
{
    int sentinel = 1;
    while (sentinel != 0){
        cout << "Hello World" << endl << "Press 0 to end the program, press anything else to repeat the program.\n";
        cin >> sentinel;
    }
    cout << "That's all Folks!" << endl;
    return 0;
}
