#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
    return 1;   // There will always be return with base case

    int chotti_samasya = factorial(n-1);
    int badi_samasya = n* chotti_samasya; // normal formula for factorial i.e n*(n-1)! = n!
    return badi_samasya;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<< ans <<endl;

    return 0;
}