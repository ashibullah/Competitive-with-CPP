#include<bits/stdc++.h>

using namespace std;

long gcd2 (long a,long b){
    long gcd;
    for (long i = 1; i <= a; i++)
    {
        if(a %i ==0 &&    b%i==0) gcd=i;
    }
    return gcd;
    
}
int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}


int main()
{
    long n1,n2;
    cin>>n1>>n2;
    long g = gcd(n1,n2);
    cout<<g<<endl;
    

    
}
