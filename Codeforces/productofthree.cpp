#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int x,N,count=0,arr[3],i=0,j=0,cl=0;
        cin>>x;
        N=x;
        for ( i = 2; i*i<N ; i++)
        {
            if(x%i==0 && cl==0){
                count++;
                x/=i;
                arr[j]=i;
                j++;
                if(count==2){
                    cl=1;
                    arr[j]=x;
                }
            }
        }
        if(count==2){
            if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]) cout<<"NO";
            else{ cout<<"YES\n";
                for (int k = 0; k < 3; k++)
            {
                cout<<arr[k]<<" ";
            }


            } 
            cout<<endl;
        }
        else cout<<"NO"<<endl;

        
        
    

    }
    
}
