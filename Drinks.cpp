#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	float n, p, o;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> p;
		o += p/100;
	}
	cout << setprecision(12) << o/n*100;
}
