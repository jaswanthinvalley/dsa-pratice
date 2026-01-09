#include <bits/stdc++.h>
using namespace std;

void f(int i, int n) {      // case one : i = 1 and n = 3
    if(i > n){return;}     // is i (1) >  n (3) no
    cout<<i<<"\n";               //is i(2) > n(3) no 
    f(i + 1,n);            //is i(3) > n(3) no
}                          //is i(4) > n(3) yes so retun 

int main() {
    int n;
    cin>>n;
    f(1,n);


}