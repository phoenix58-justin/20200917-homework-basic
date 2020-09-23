#include <iostream>
using namespace std;
int main() {
  int num ;
  cout << "num: ";
  cin >> num;

  if (num%3==0){
    cout << "NUM 是三的倍數";
    cout << "num== " << num;
  }
  else{
    cout << "NUM 不是三的倍數";
}
}