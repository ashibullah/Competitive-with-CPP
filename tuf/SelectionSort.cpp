#include<bits/stdc++.h>
using namespace std;

int display(int n,int arr[]){
    for (size_t i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int selection_sort(int n, int arr[]){
    for (int i = 0; i < n; i++)
    {
        
        int min=99999,clock=i;      
        for (size_t j = i; j < n; j++)
        {
            if(min>arr[j]){
             min = arr[j];
                clock=j;
            }  
        }
        int sw=arr[i];
        arr[i]= min;
        arr[clock]=sw;
    }
    display(n,arr);
    
}

int bubblesort(int n, int arr[]){
    for (int  j = 0; j < n; j++)
    {
        bool dn=false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>arr[i+1] && i+1<n)
            {
            arr[i] = arr[i]+arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i] = arr[i]-arr[i+1];
            dn=true;

            }
        }
        if(!dn) break;
        cout<<"Runs\n" ;   
    }
    display(n,arr);
}

int main(){
    #ifndef cpp
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
    cin>>T;
    while (T--)
    {
         int x;
        cin>>x;
        int unsort[x];
    for (int i = 0; i < x; i++)
    {
        cin>>unsort[i];
    }
    
    // selection_sort(x,unsort);
    bubblesort(x,unsort);

    }
    
   

}