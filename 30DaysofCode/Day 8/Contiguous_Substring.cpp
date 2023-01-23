// Problem Link : https://my.newtonschool.co/playground/code/os53sfvxy4b1
 
#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    
    string s,t; 
    cin >> s >> t;

    if(s==t){
        cout << "Yes" << endl;
        return;
    }

    if(s.size() < t.size()){
        cout << "No" << endl;
        return;
    } 

    int i = 0;
    int n = s.size();
    int j = 0;
    while(i<n){
        if(s[i] == t[0]){
            int k = i;
            j = 0;
            while(k<n && j<t.size() && s[k] == t[j]){
                k++;
                j++;
            }
            if( j == t.size()){
                cout << "Yes" << endl;
                return;
            }
        }
        i++;
    }
    cout << "No" << endl;
    return;

}

int main() {
	solve();
    return 0; 
}
