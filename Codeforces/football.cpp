#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0, result=0;
     for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0'){
        while (s[i]=='0' && i<=s.size())
        {
            count++;
            i++;
        }
        if(count>=7) {
                result=1;
                
            }
            count = 0;
        }
        
        else{
            while (s[i]=='1'  && i<=s.size())
            {
                count++;
                i++;
            }
            if(count>=7) {
                result=1;
                
            }
            count = 0;
        }
        
        i--;
        
        
    }

    if(result==1) cout<<"YES";
    else cout<<"NO";
    
}
