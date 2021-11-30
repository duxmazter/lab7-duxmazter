#include<iostream>
#include<cmath>

using namespace std;

int adiff (int A, int B){
    while ( A >= 360 ){
      A = abs(A-360);
    }

    while ( B >= 360 ){
      B = abs(B-360);
    }
    
    int C;
    return C = abs(A-B);
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
