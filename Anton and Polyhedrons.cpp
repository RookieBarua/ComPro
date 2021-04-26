#include<iostream>
#include<string>
using namespace std;
int main(){
  int n, total=0;
  string s[2000001];
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> s[i];
    if(s[i] == "Tetrahedron") total+=4;
    else if(s[i] == "Cube") total+=6;
    else if(s[i] == "Octahedron") total+=8;
    else if(s[i] == "Dodecahedron") total+=12;
    else if(s[i] == "Icosahedron") total+=20;
  }
  cout << total << endl;
}
