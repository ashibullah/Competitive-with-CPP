#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int size,index=0;
        string s;
        cin>>size>>s;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            if(s[i]=='1'){
                if(index==1){
                    arr[i]=-1;
                    index =0;
                }
                else {
                    arr[i]=1;
                    index=1;
                }

            }
            else {
                arr[i]=0;
            }
        }
        
        for (int i = 1; i < size; i++)
        {
            if(arr[i]==1 || arr[i]==0)cout<<"+";
            else if(arr[i]==-1) cout<<"-";
        }
        cout<<endl;
        
        
    }
    
}
