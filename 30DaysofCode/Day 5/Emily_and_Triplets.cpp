// Problem Link : https://my.newtonschool.co/playground/code/9kyd6stp3tsa

#include <bits/stdc++.h>
using namespace std;


void solve(){   

    int s,t;
    cin >> s >> t;
    
    int ans = 0;
    for(int a = 0; a<=s; a++){
        for(int b = 0; b<=s && a+b<=s; b++){
            for(int c = 0; c<=s && a+b+c<=s; c++){
                if(a*b*c <= t) ans++;
            }
        }
    }
    cout << ans << endl;
    return;
}


int main(){
    
    solve();

    return 0;
}