#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,z=0,e=0,r=0,o=0,n=0;
    string s;
    cin>>x>>s;
    sort(s.begin(),s.end());
    for (int i = 0; i < x; i++)
    {
        if(s[i]=='z') z++;
        else if(s[i]=='e') e++;
        else if(s[i]=='r') r++;
        else if(s[i]=='o') o++;
        else if(s[i]=='n') n++;
        else if(z==1 && e==1 && r ==1 && o ==1 ){
            cout<<"0 "; 
            z--;
            e--;
            r--;
            o--;
            
        }
        else if(e==1 && n ==1 && o ==1 ){
            cout<<"1 "; 
        }
    }
    
    
    
    
    


}
