#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, a[100], sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
    	cin >> a[i];
	}
	sort(a, a + n);
	for(int i=0; i<n-1; i++){
    	sum += a[n-1]-a[i];
	}
	cout << sum;
}
