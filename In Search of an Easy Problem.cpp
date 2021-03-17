#include<iostream>
using namespace std;
int main() {
	int n, p;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> p;
		if(p==1){
			cout << "HARD";
			exit(0);
		}
	}
	cout << "EASY";
}
