#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    vector<int> v(2001,0);
    int n;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        v[temp] = 1;
    }
    for(int i = 0; i<v.size();i++){
        if(v[i] == 0){
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main() {
	solve();
    return 0;
}