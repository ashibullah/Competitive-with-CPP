#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int r,b,d,mini,maxi;
        cin>>r>>b>>d;
        mini= min(r,b);
        maxi= max(r,b);
        if(mini*(d+1)>=maxi){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
}