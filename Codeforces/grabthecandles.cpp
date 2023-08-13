#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int size,m=0,b=0;
       cin>>size;
       int arr[size];
       for (int i = 0; i < size; i++)
       {
            cin>>arr[i];
       }
       
       for (int i = 0; i < size; i++)
       {
            if(arr[i]%2==0) m+=arr[i];
            else b+= arr[i];
       }
       if(m>b) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

       

        
    }
    
}
