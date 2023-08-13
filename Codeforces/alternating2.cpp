#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;string a;bool f=1;
		cin>>n>>a;
		for(int i=0;i<n;i+=2) 
        for(int j=1;j<n;j+=2) 
        if(a[i]==a[j]) f=0;
		
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}