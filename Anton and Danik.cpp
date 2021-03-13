#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
  int n, count_A = 0, count_D = 0;
	string s;
  char checkCharacter = 'A';
	cin >> n;
	for(int i=1; i<=n; i++){
    cin >> s;
	}
  for (int i = 0; i < s.size(); i++){
    if (s[i] ==  checkCharacter){
      ++ count_A;
    }else{
      ++ count_D;
    }
  }
  if(count_A > count_D) cout << "Anton";
	if(count_A < count_D) cout << "Danik";
	if(count_A == count_D) cout << "Friendship";
}
