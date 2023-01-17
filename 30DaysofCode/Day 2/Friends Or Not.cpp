#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    // vector<vector<int>> v(n+1,vector<int>(n+1,0));
    unordered_map<int,vector<int>> m;

    int a,b;
    for(int i=1; i<n; i++){
        cin >>a >> b;
        m[a].push_back(b);
        m[b].push_back(a);
    }

    long long nthSum = (n*(n+1))/2;
    long long sum=0;
    for(auto i : m){
        sum = accumulate(i.second.begin(),i.second.end(),0) + i.first;
        // cout << nthSum << " " << sum << endl;
        if(sum == nthSum){
            cout << "Yes"<<endl;
            return;
        }
    }
    cout << "No"<<endl;
    return;
}


int main() {
    solve();
    cout<<"Hello World!";
}
