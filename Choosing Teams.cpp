#include<iostream>
using namespace std;
int main(){
	int n, k, y[2000], count=0;
	cin >> n >> k;
	for(int i=0; i<n; i++){
	    cin >> y[i];
	    if(5-y[i]>=k){
	        count++;
	    }
	}
	cout << count/3;
}
