#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,s=0,f=0;
    string a;
    cin>>n>>a;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='S' && a[i+1]=='F') s++;
        else if(a[i+1]=='S' && a[i]=='F') f++;
    }
    if(s>f)cout<<"Yes";
    else cout<<"No";
}
