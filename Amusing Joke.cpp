#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s, s1, s2, t;
    cin >> s1 >> s2 >> t;
    s = s1 + s2;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
