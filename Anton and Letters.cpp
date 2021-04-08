#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
  int count=0;
  string set_of_letters;
  getline(cin, set_of_letters);
  for(int i = 0; i < set_of_letters.size(); i++){
    bool appears = false;
    for(int j = 0; j < i; j++){
      if(set_of_letters[j] == set_of_letters[i]){
        appears = true;
        break;
      }
    }
    if(!appears){
      count++;
    }
  }
  if(count > 3) cout << count - 4;
  else if(count == 3) cout << 1;
  else cout << 0;
}
