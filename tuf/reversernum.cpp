#include<bits/stdc++.h>

using namespace std;

long reverseBits(long n) {
    string str = to_string(n);
    reverse(str.begin(),str.end());
    n = stoi(str);
    return n;
}

int main(int argc, char const *argv[])
{
    long n;
    cin>>n;
    cout<<reverseBits(n);

    
}
