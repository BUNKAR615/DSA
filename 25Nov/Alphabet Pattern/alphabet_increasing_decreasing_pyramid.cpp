#include <iostream>
using namespace std;

int main() {

    int i = 1, s = 1, star = 1;   // (Note: 's' and 'star' are unused)
    int n;

    cout << "Take the input n\n";
    cin >> n;

    // Outer loop for number of rows
    for (i; i <= n; i++) {

        
        // 1. Print leading spaces
     
        for (int s = 1; s <= (n - i); s++) {
            cout << " ";
        }

     
        // 2. Print increasing characters (A, AB, ABC...)
    
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << char(ch);
        }

       
        // 3. Print decreasing characters (BA, CBA...)
        // Starts from the second last char printed above
    
        for (int ch = 'A' + i - 2; ch > 'A' - 1; ch--) {
            cout << char(ch);
        }

        // Move to next line after completing each row
        cout << endl;
    }

    return 0;
}
