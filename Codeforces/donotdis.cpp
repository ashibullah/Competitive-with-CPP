#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,ans=0;
        cin>>l;
        string s;
        cin>>s;
        map<char,int>mp;
        // AABA
        // mp [A,0  A,1  B,2  A,3]
        for (int i = 0; i < l; i++)
        {
            mp[s[i]]++;
            char z= s[i];
            while (s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1) ans=1; 
        }
        if(ans==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        
    }

    return 0;
}
