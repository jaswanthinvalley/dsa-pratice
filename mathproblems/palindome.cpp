#include <bits/stdc++.h>
using namespace std;


bool ispal(int n) {
    int orginal = n;
    int rev = 0;
    while (n > 0)
    {
    int ld = n % 10;
    rev = (rev*10) + ld;
    n = n / 10;
    }
    //cout<<rev;

    if(rev == orginal) {
        cout<<"true";
        return true;
        
    }
    else {
        cout<<"false";
        return false;
    }
    

}
int main() {
    int n;
    cin>>n;
    ispal(n);

}