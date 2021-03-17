#include<iostream>
using namespace std;
int main(){
	int n, a[100000], count=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i] != a[i+1]) count++;
	}
	cout << count;
}
