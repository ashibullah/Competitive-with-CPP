#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];



        } 
        if (sum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        

	}


    /*
    int even[n],odd[n],ce=0,co=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even[ce]=a[i];
                ce++;
            }
            else{
                odd[co]=a[i];
                co++;
            } 
        }
        int sume=0,sumo=0;
        for(int i=0;i<sizeof(even);i++){
            sume+=even[i];
            
        }
        for(int i=0;i<sizeof(odd);i++){
            sumo+=odd[i];
        }
        if (sumo%2==0)
        {
            cout<<"YES"<<endl;
        }
        
        else{
            sumo+=even[0];
        }


            [1,2,4,3,2,3,5,4]
            1+2+4+3+2+3+5+4 = 24
            1+2+4+3+2+3+5 = 20
            1+2+4+3+2+3 = 15
            1+2+4+3+2 = 12


            7
8
1 2 4 3 2 3 5 4
2
4 7
3
3 9 8
2
1 7
5
5 4 3 2 1
4
4 3 4 5
2
50 48


    */
	return 0;
}