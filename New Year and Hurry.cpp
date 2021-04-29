#include<iostream>
using namespace std;
int main(){
  int n, k, count = 0, time = 240;
  cin >> n >> k;
  time = time - k;
  for(int i=1; i<=n; i++){
    if(time - 5*i >=0){
        time = time - 5*i;
        count++;
    }
  }
  cout << count << endl;
}
