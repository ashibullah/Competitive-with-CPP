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
    // cout<<"Enter Value\n";
    
    int arr[x];
    map<int,int> hashmap;
    
    int max=0;
    for (size_t i = 0; i < x; i++)
    {
        cin>>arr[i];
        hashmap[arr[i]]++;
    }
    for (auto it: hashmap)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    

    
}