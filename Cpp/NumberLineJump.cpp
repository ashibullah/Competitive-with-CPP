#include<bits/stdc++.h>
using namespace std;
int x1,v1,x2,v2;
int main()
{
    cin>>x1>>v1>>x2>>v2;
    v1= v1*4;
    v2= v2*4;
    x1+=v1;
    x2+=v2;
    if(x1==x2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
