#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    int tx=0,ty=0,tz=0;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        tx+= x;
        ty+= y;
        tz+= z;
    }
    if(tx==0 && ty ==0 && tz==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
