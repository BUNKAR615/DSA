#include <iostream>

using namespace std;

int main() {

    char ch = 'A';

    cout << "Take the input\n";

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        //For printing the sequence 

        for (int j = 1; j <= i; j++) {

            cout << char(ch + i - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}