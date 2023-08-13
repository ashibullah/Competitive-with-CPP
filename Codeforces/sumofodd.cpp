#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll x;
    cin>>x;
    ll sum = 0,odd = 1;
    for (auto i = 0; i < x; i++)
    {
        sum+= odd;
        odd+= 2;
        
    }
    cout<<sum;
    

	return 0;
}