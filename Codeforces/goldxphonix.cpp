#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long int n,x,sum=0;
       cin>>n>>x;
       int num;
       vector<int>v;
       for(int i =0;i<n;i++){
            cin>>num;
            v.push_back(num);
            sum+=num;
       }
       if(sum==x){
           cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
        sum=0;
        int count = 0;
        
       for (int i = 0; i < n; i++)
       {
        if(v[i]+sum==x){
            swap(v[i],v.back());
        }
        sum+=v[i];
        cout<<v[i]<<" ";
       }
       
        }
        cout<<"\n";

    }
    
}