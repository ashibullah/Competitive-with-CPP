#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int size,m=0;
       cin>>size;
       string s,p="";
       cin>>s;
       for (int i = 0; i < size; i++)
       {
            if (s[i]=='a')
            {
                s[i]='0';
                p+='0';

            }
            else if( s[i] == 'b' || s[i]=='c'){
                
                s[i]='1';
                p+='1';

            }
                        
       }
       for (int i = 0; i < size-1; i++)
       {
            if (s[i]== s[i+1])
            {
                m++;

            } 

       }
       if (sizeof(p)==2 )
            {
                 m++;
                
            }
        else if (sizeof(p)==1 )
            {
                if(p[0]=='0') m++;
                
            }


       if (m==0)
       {
            cout<<"YES "<<s<<" "<<p <<endl;
       }
       else cout<<"NO "<<s <<" "<<p <<endl;   

        
    }
    
}


/* 
8
7
abacaba
2
aa
1
y
4
bkpt
6
ninfia
6
banana
10
codeforces
8
testcase



YES
NO
YES
YES
NO
YES
NO
NO
*/ 

