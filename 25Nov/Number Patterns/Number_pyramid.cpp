#include <iostream>
using namespace std;

int main() {
    
    int i=1, s=1, star =1;
    
    int n;

    cout <<"Take the input n\n";
    cin>>n;

    for(i; i<=n ; i++){
        for(int s=1 ; s<=(n-i) ; s++){
            
            cout <<" ";
        }
        for(int star=1 ; star <=(2*i-1) ; star++){
            
            cout<<star;
        }
        cout<<endl;
        
    }
    
    return 0;
    }
