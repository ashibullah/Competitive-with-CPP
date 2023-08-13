#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm> 
#include <climits> 

using namespace std;

int main() {
    long long a[6],min=0,max=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    for(int i=0;i<4;i++){
        min+= a[i];
        max+= a[i+1];
    }
    cout<<min<<" "<<max;
    return 0;
}