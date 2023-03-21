#include<iostream>
using namespace std;
 int main()
 {
    int n,f,fault=0,hit=0,box=0;
    cout<<"array size & F: ";
    cin>>n>>f;
    int a[n],p[f];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int j=0,i=0;
    while (box!=n)
    {
        
        if (i==f-1)
        {
            i=0;
        }
        else {
            p[i]=a[j];
            i++;
            j++;
            box++;
            fault++;
            int k=0;
            for (k = 0; k < f; i++)
            {
                if(a[i]==p[k]){ hit++;
                fault--;
                }
            }
            
        }
        
        

    }    
    return 0;
 }
 