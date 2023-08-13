#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int num,x,ans;
        cin>>num;
        ans=num;
        // cout<<"Num is " <<num<<endl;
        while (num!=1)
        {
           ans = ans +(num/2);
        //    cout<<"Ans ="<<ans<<" + "<<num/2<<endl;
           num/=2;
        }
        cout<<ans<<endl;
        
        
        
    }
    
}
