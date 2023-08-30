#include <bits/stdc++.h>
using namespace std;


int main(){
    #ifndef cpp
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif
    
    // cout<<"Enter Size\n";
    int x,s;
    cin>>x>>s;
    cout<<x<<s;
    // cout<<"Enter Value\n";
    int vsize= pow(10,s);
    vector<int>hashingg(vsize,0);
    vector<int>value(x);
    for (size_t i = 0; i < x; i++)
    {
        int n;
        cin>>n;
        hashingg[n]+= 1;
        value.push_back(n);

    }

    for(int j = 0 ;j<x;j++){
        int p = hashingg[j+1];
        cout<<p<<" ";
    }
    
     return 0;
    
    
}