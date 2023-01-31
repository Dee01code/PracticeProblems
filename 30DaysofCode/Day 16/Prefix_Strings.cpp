#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    string x,y;
    cin >> y >> x; 
    if(y.size()>x.size()){
        cout << "No" << endl;
        return;
    }

    for(int i = 0; i<y.size(); i++){
        if(y[i] != x[i]){
            cout << "No" << endl;
            return;
        }    
    }
    cout << "Yes" << endl;
    return;
}

int main() {
	solve();
    return 0;
}
