#include <bits/stdc++.h>
using namespace std;

void extract(int n) {
    while(n > 0){
        int lastdigit = n %10;
        cout<<lastdigit;
        n = n/10;

    }

}
int main() {
    int n;
    cin>>n;
    extract(n);


}