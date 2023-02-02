#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    
    long long a,b;
    cin >> a >> b;

    while(a>0 && b>0){
        int dig1 = a%10;
        int dig2 = b%10;
        if(dig1 + dig2 > 9){
            cout << "Hard" << endl;
            return;
        }
        a/=10;
        b/=10;
    }
    
    cout << "Easy" << endl;
    return;
}

int main() {
	solve();
    return 0;
}