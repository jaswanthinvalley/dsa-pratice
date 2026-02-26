#include <bits/stdc++.h>
using namespace std;

void countnum(int n) {
    int countn = 0;
    while(n > 0){
        int ld = n%10;
        countn = countn + 1; 
        n = n / 10;
    }
    cout<<countn;
}
int main() {
    int n;
    cin>>n;
    countnum(n);

}