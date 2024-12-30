#include<iostream>
using namespace std;

class NthFibonacciNumber{

  public:
  int getFibonacciNumber(int n) {
    if (n <= 1){
      return n;
    }
    else{
      return getFibonacciNumber(n-1) + getFibonacciNumber(n-2);
    }
  }
};

int main(){
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  
  NthFibonacciNumber mynumber;
  cout << mynumber.getFibonacciNumber(n);

  return 0;
}