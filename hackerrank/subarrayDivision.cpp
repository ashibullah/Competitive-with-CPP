#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    int d,m,count=0,lc=0;
    cin>>d>>m;
    int sum=0;

            /*
                6
                1 1 1 1 1 1
                3 2 
                i = 0 sum =1
                j=1 sum = 1+a[1]=2 
                j=2 sum = 2+ a[2]= 3


                2 2 1 3 4 m=2 d=4
                i=0 arr[0]= 2 so sum=2;
                j=1 arr[j]= 2 so sum+= arr[j] = 2+2 = 4 = d so count=1;

                i=1 arr[i] = 2 so sum= arr[i] = 2
                j=2 arr[j] = 1 so sum+= arr[j] = 2+1 = 3 

                1
                4
                4 1 d=4 m=1;

                19
                2 5 1 3 4 4 3 5 1 1 2 1 4 1 3 3 4 2 1
                18 7 d=18 m=7
                sum




            
            
            
            */




    for (int i = 0; i < n-m; i++)
    {
        sum = arr[i];
        int j = i+1;
        while(  lc<m-1 ){
            sum+= arr[j];
            lc++;
            j++;

        }
        if(sum==d ) count++;
        
    }
    // for (int i = 0; i < n-m; i++)
    // {
    //     sum = arr[i];
    //     for (int j = i+1; lc <m-1; j++)
    //     {
    //         lc++;
    //         sum+= arr[j];
            
    //     }
    //     if (sum ==d) count++;
    //     lc=0;
        
    // }
    if(m==1){
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==d) count++;
        }
        
    }
    
    cout<<count<<endl;
    
    
	return 0;
}