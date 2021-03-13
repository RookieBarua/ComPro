#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	reverse(s.begin(), s.end());
	int x = t.compare(s);
	if(x==0) cout << "YES";
	else cout << "NO";
}
