#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int num,x;
        int ans=0;
        cin>>num;
        while (num>=2050)
        {
            ans++;
            x=2050;
            while (x<=num)
            {
                x*=10;
            }
            x/=10;
            num=num-x;
        }
        if (num!=0)
        {
            cout<<-1<<"\n";
        }
        else cout<<ans<<"\n";
        
    }
    
}
