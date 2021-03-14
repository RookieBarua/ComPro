#include<iostream>
using namespace std;
int main(){
	int n, p, q, count=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> p >> q;
		q = q - p;
		if(q>=2){
			count++;
		}
	}
	cout << count;
}
