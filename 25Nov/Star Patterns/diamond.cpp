#include <iostream>

using namespace std;

int main() {

    int in = 1;

    int n;

    cout << "Take the input n\n";
    cin >> n;

    // Print the pyramid

    if (in == 1) {
        for (int i = 1; i <= n; i++) {
            
            //Print Spaces
            for (int s = 1; s <= (n - i); s++) {

                cout << " ";
            }
            
            //Print Stars
            for (int star = 1; star <= (2 * i - 1); star++) {

                cout << "*";
            }
            cout << endl;
        }
        in = in + 1;
    }
    // Print the inverted pyramid of n-1

    if (in == 2) {

        for (int i = 1; i <= n; i++) {

            //Print Spaces
            for (int s = 1; s <= i; s++) {

                cout << " ";
            }

            //Print Stars
            for (int star = 1; star <= 2 * n - 2 * i - 1; star++) {

                cout << "*";
            }
            cout << endl;

        }
    }
    return 0;

}