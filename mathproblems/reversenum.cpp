#include <bits/stdc++.h>
using namespace std;


void reversenum(int n) {
    while(n>0){
    int revnum = 0;
    int lastdigit = n % 10;
    revnum = (revnum * 10) + lastdigit;
    n = n / 10;
    cout<<revnum;
    }
}
int main() {
    int n;
    cin>>n;
    reversenum(n);
}