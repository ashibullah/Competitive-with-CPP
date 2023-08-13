#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
   int a,b,c,t;
   cin>>t;
   int ans[t];
   for (int i = 0; i < t; i++)
   {
    cin>>a>>b>>c;
    if(a+b==c ) ans[i]=1;
    else ans[i]=0;
   }
   for (int i = 0; i < t; i++)
   {
    if(ans[i]==1) cout<<"+\n";
    else cout<<"-\n";
   }
   
}
