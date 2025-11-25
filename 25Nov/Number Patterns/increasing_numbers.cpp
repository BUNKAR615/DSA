#include <iostream>

using namespace std;

int main() {

    int i, n;

    cout << "Take the input\n";

    cin >> n;

    //Print the increasing numbers in a series

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
