#include<iostream>
#include<cmath>

using namespace std;

int adiff(int A,int B){
  A %= 360;
  B %= 360;
  int C = abs(A-B);
  if (C > 180){
    C = 360 - C;
  }
  return C;
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
