#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int decimalToOctal(int deciNum)
{
 
    // initializations
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
 
    while (deciNum != 0) {
 
        // decimals remainder is calculated
        int remainder = deciNum % 8;
 
        // storing the octalvalue
        octalNum += remainder * countval;
 
        // storing exponential value
        countval = countval * 10;
        deciNum /= 8;
    }
    return octalNum;
}

bool contain7(long n){
    string s = to_string(n);
    // cout << s << " ";
    size_t contain = s.find('7');
    if(contain != string :: npos){
        // cout << " i'm having " << s << " ";
        return true;
    }
    // cout << "hi ";
    return false;
}

void solve(){
     long n;
     cin >> n;
     int ans=0;
     int ans2 = n;
    while(n){
        long oct = decimalToOctal(n);
        if(contain7(n) || contain7(oct)) ans++;
        n--;
    }
    cout << ans2-ans << endl;
}

int main() {
	solve();
    return 0;
}