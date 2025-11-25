#include <iostream>

using namespace std;

int main() {

    int i = 1, s = 1, star = 1;

    int n;

    cout << "Take the input n\n";
    cin >> n;

    for (i; i <= n; i++) {

        //For spaces
        for (int s = 1; s <= (n - i); s++) {

            cout << " ";
        }
        //For increasing numbers
        for (int increasing = 1; increasing <= i; increasing++) {

            cout << increasing;
        }
        //For decreasing numbers
        for (int decreasing = i - 1; decreasing >= 1; decreasing--) {

            cout << decreasing;
        }
        cout << endl;

    }

    return 0;
}