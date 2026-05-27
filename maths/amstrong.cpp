#include <bits/stdc++.h>
using namespace std;

void amstrong(int n) {
    int dup = n;
    int sum = 0;
    while(n > 0){
        int ls = n % 10;
        sum = sum + (ls*ls*ls);
        n = n / 10;
    }
    if(sum == dup) cout<<"true";
    else cout<<"false";

}

int main() {
    int n;
    cin>>n;
    amstrong(n);

}