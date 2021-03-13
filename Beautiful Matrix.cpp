#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int mat, row, col, ans;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> mat;
            if(mat == 1){
                row = i;
                col = j;
            }
        }
    }
    ans = abs(3-row) + abs(3-col);
    cout << ans << endl;
}
