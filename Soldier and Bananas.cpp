#include<iostream>
using namespace std;
int main(){
  int k, n, w, pay=0;
  cin >> k >> n >> w;
  for(int i=1; i<=w; i++){
    pay += i*k;
  }
  pay-=n;
  if(pay<=0){
    cout << 0 << endl;
  }else{
    cout << pay << endl;
  }
}
