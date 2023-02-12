#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void solve(){
    
    string s,t;
    cin >> s >> t;

    int ans = INT_MAX;
    for(int i = 0; i <= s.size()-t.size(); i++){
        int temp=0;
        
        for(int spt = i, tpt = 0; tpt < t.size();){
            if(s[spt] != t[tpt]) temp++;
            spt++;
            tpt++;
        }
        ans = min(ans,temp);
    }

    cout << ans << endl;


}

int main() {
	solve();
    return 0;
}
