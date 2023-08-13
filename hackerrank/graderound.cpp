#include<iostream>
using namespace std;
int main()
{
    long n,c=0;
    cin>> n;
    long a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>> a[i];
        if (a[i]%5!=0 && a[i]>35)
        {
            c=abs(a[i]/5);
            c++;            
            c=c*5;            
            c=abs(a[i]-c);            
            if (c<3)
            {
                a[i]+=c;
            }
        }
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<"\n";
    }    
    return 0;
}
