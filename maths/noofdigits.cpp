#include <bits/stdc++.h>
using namespace std;


void extract(int n) {
    int cnt = 0;

    while(n > 0) {
        n = n /10;
        cnt = cnt + 1;
        
    }
    cout<<cnt;

}

int main() {
    int n;
    cin>>n;
    extract(n);
}