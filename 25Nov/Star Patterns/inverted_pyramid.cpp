#include <iostream>

using namespace std;

int main() {

    int i = 1;

    int n;

    cout << "Take the input n\n";
    cin >> n;

    for (i; i <= n; i++) {

        //Print Spaces
        for (int s = 1; s <= i-1; s++) {

            cout << " ";
        }

        //Print Stars
        for (int star = 1; star <= 2 * n- 2*i+1 ; star++) {

            cout << "*";
        }
        cout << endl;

    }

    return 0;
}