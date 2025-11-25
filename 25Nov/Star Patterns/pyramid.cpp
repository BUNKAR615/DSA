#include <iostream>
using namespace std;

int main() {
    
    int i=1, s=1, star =1;
    
    int n;

    cout <<"Take the input n\n";
    cin>>n;

    for(i; i<=n ; i++){
        for(s ; s<=(n-i) ; s++){
            
            cout <<" ";
        }
        for(star ; star <=(2*i-1) ; star++){
            
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
    }