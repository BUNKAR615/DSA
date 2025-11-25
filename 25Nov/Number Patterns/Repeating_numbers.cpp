#include <iostream>

using namespace std;

int main() {

    int i, n;

    cout << "Take the input\n";

    cin >> n;

    //Repeating the numbers in a series

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
