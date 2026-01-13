#include <bits/stdc++.h>
using namespace std;

int main() 
{
  vector<int> v(4);
  cin>>v[0] >>v[1] >> v[2] >> v[3];
  int largest = v[0];
  for(int i=0; i < v.size(); i++){
    if(v[i] > largest) {
      largest = v[i];
    }
    
  }
  cout<<largest;
}