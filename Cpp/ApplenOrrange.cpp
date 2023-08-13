#include <bits/stdc++.h>
using namespace std;
int a,o,s,t,m,n,ca=0,co=0;

int main()
{
    cin>>s>>t>>a>>o>>m>>n;
    int apple[m],orange[n];
    for (int i = 0; i < m; i++)
    {
        cin>>apple[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>orange[i];
    }
    for (int i = 0; i < m; i++)
    {
        if(apple[i]+a>=s && apple[i]+a<=t) ca++;    
    }
    for (int i = 0; i < n; i++)
    {
        if(orange[i]+o>=s && orange[i]+o<=t) co++;    
    }
    cout<<ca<<"\n"<<co;
    return 0;
}
