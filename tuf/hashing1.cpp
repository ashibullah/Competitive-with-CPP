#include <bits/stdc++.h>
using namespace std;


int main() {
   int n1 = 6;
    vector<int> v1,v2;
    for (size_t i = 0; i < n1; i++)
    {
        int p;
        cin>>p;
        v1.push_back(p);
    }
    for(int i =0;i<n1;i++){
        int p = v1[i];
        cout<<p<<" ";
    }

    for(int i =0;i<n1;i++){
        int count=0;
        for (int j = 1; j < n1; j++)
        {
            if (v1[i]== v1[j])
            {
                count++;               
            }
            
            
        }
        
    }


    

    return 0;
}
