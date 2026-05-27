#include <bits/stdc++.h>
using namespace std;


void pali (int n) {
    int dup = n;
    int rev = 0;
    while(n > 0) {
        int ls = n % 10;
        rev = (rev * 10) + ls;
        n = n/10;
    }

    if (rev == dup) cout<< "true";
    else cout<<"false";


}

int main() {
    int n;
    cin>>n;
    pali(n);

}