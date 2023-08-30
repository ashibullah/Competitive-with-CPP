#include <bits/stdc++.h>
using namespace std;
 

int main(){
    #ifndef cpp
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);
    #endif
    
    cout<<"Enter Size\n";
    int x,s;
    cin>>x>>s;
    cout<<"Enter Value\n";
    
    vector<int>hashingg(s+1,0);
    vector<int>value(x);
    int max=0;
    for (size_t i = 0; i < x; i++)
    {
        
        int n;
        cin>>n;
        (n>max)? max = n : max= max +1 -1 ; 
        
        hashingg[n]+= 1;
        value.push_back(n);

    }
    int mini=99999,maxi=0,indmax,indmini;
    for(int j = 0 ;j<=max;j++){
        if(hashingg[j] > 0) cout<<j<<" "<<hashingg[j]<<endl;
        if(hashingg[j]>maxi){
            maxi = hashingg [j];
            indmax = j;

        } 
        if(hashingg[j]<mini && hashingg[j]!= 0){
            mini = hashingg [j];
            indmini=j;

        } 
    }
    cout<<"Maximum Frequency "<<indmax<<" "<<maxi<<" times \n";
    cout<<"Maximum Frequency "<<indmini<<" "<<mini<<" times \n";
    
     return 0;
    
    
}