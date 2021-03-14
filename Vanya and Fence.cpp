#include<iostream>
using namespace std;
int main(){
	int n, h, a, count=0;
	cin >> n >> h;
	for(int i=1; i<=n; i++){
		cin >> a;
		if(a<=h){
			count++;
		}else{
			count+=2;
		}
	}
	cout << count;
}
