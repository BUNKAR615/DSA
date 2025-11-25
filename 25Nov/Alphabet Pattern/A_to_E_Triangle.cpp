#include <iostream>

using namespace std;

int main() {

    char ch = 'A';

    cout << "Take the input\n";

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        //For printing the sequence AB...

        for (char ch = 'A'; ch < 'A' + i; ch++) {

            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}