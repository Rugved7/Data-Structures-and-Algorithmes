#include<iostream>
using namespace std;
int fibonacci(int n){
//base case
  if (n==0)
    return 0;
  if (n==1)
    return 1;
  int small = fibonacci(n-1);
  int large = small+fibonacci(n-2);
  return large;
}


int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}