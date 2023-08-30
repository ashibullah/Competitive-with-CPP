#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef cpp
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        int n,pos=0,error=0;
        cin >> n;

        int arr[n];
        vector<int>l1;
        vector<int>r1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
          
        }
        sort(arr, arr + n);

        
        
        if (arr[0]==arr[n-1])
        {
            error=1;
        }
        else{
            for (size_t i = 0; i < n; i++)
            {
                int help=0;
                if(arr[i]== arr[i+1]){
                    l1.push_back(arr[i]);
                    pos++;
                }
                else {
                    for (int j = 0; j < n; j++)
                    {
                        
                        if (arr[j]% arr[i]==0 && i!=j)
                        {
                            l1.push_back(arr[i]);
                            break;
                            pos++;
                        }
                        help++;
                        if(help==n){
                            r1.push_back(arr[i]);
                            break;
                            
                        }
                        
                        
                    }
                }
                
            }
            
            
        }
        if (error==1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<r1.size()<<" "<<l1.size()<<endl;
        for (int i = 0; i < l1.size(); i++)
        {
            cout<<l1[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < r1.size(); i++)
        {
            cout<<r1[i]<<" ";
        }
        cout<<endl;
        
            
        }
        
        
  

        
    }
}