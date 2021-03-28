#include<iostream>
using namespace std;
int main(){
  int s[3], count=0;
  for (int i=0; i<=3; i++){
    cin >> s[i];
  }
  for(int i=0; i<3; i++){
    if(s[i] == s[i+1] || s[i] == s[i+2] || s[i] == s[i+3]) count++;
  }
  cout << count;
}
