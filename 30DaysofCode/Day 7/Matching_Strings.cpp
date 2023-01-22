// Problem link : https://my.newtonschool.co/playground/code/ihlkjhd44rww

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    string s,t;
    cin >> s >> t;
    
    int lifeline=  1;

    int n = s.size();
    for(int i = 0; i<n; ){
        if(s[i] != t[i] && lifeline){
            if(i==n-1) {
                cout << "No" << endl;
                return;
            }
            if(s[i] == t[i+1] && s[i+1] == t[i]){
                    lifeline--;
                    i+=2;
            }
            else{
                cout << "No" << endl;
                return;
            }
        }
        else if(s[i] != t[i] && !lifeline){
            cout << "No" << endl;
            return;
        }
        else i++;
    }
    cout << "Yes" << endl;
    return;

}


int main() {
	solve();
    return 0;
}