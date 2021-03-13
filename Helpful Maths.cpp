#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int x[100];
	char temp;
	int i = 0;
	while (1){
		cin >> x[i];
		i++;
		cin.get(temp);
		if (temp == '\n')
			break;
	}
	sort(x, x + i);
	cout << x[0];
	for (int j = 1; j < i; j++){
		cout << '+' << x[j];
	}
}
