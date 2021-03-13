#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        int a,b,c,t;
        cin >> a >> b >> c;
        t=a+b+c;
        if(t>=2){
            count++;
        }
    }
    cout << count;
}
