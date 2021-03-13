#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int len;
    string username;
    cin >> username;
    sort(username.begin(), username.end());
    username.erase(unique( username.begin(), username.end() ), username.end());
    len = username.size();
    if(len%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}
