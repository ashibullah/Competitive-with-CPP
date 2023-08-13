#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    cin>>x>>y;
    char s[x];
    for (int i = 0; i <=x; i++)
    {
        scanf("%c",&s[i]);
    }
    for (int i = 0; i <=x; i++)
    {
        if(s[i]=='B' && s[i+1]=='G'){
            s[i]='G';
            s[i+y-1]='B';
        }
    }
    cout<<s;
    
    
}
