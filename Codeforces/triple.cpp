#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
       int size,ans=-1,clc=0;
       cin>>size;
       int arr[size];
       for (int i = 0; i < size; i++)
       {
            cin>>arr[i];
       }
    //    1 4 3 4 3 2 4 1
       for (int i = 0; i < size; i++)
       { 
            clc=0;
            // cout<<"Iteration Of "<<arr[i]<<"\n";
            for (int j = i+1; j<size; j++)
            {   
                
                if(arr[j]== arr[i]){
                    clc++;
                    if(clc>=2){
                    ans=arr[i];

                    } 
                }
                
                
                
            }
            
       }
       cout<<ans;

       

       cout<<endl;
        
        
    }
    
}
