#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,sum=0,en1;
    cin>>n1;
    en1 = n1;
    string str = to_string(n1);
    int n2 = str.length();

    for (auto i = 0; i <n2; i++)
    {
        // cout<<pow(en1%10,n2)<<"  ";
        float powers = pow(en1%10, n2);
        cout<<sum<<"+" <<powers<<endl;

        sum+=powers;
        en1/=10;
    }
    cout<<endl;
    (sum==n1)? cout<<sum<<"YES": cout<<"NO "<<sum<<endl;
    
    

    
}
