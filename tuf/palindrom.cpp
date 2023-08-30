#include<bits/stdc++.h>

using namespace std;

long reverseBits(long n) {
    string str = to_string(n);
    reverse(str.begin(),str.end());
    int x = stoi(str);
    return n;
}

long palindrom(long n){
    long N = n;
    long rev=0;
    while (N!=0)
    {
        long d = N%10;
        rev= rev*10+ d; 
        N/= 10;

    }
    cout<<rev<<endl;
    cout<<n<<endl;
    return (rev == n)? 1:0 ;
    
}

int main()
{
    long n;
    cin>>n;
    cout<<palindrom(n);

    
}
