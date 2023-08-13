#include<bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int n;
        cin>>n;
         vector<int> a;

         int num;
        while (cin >> num) {
        a.push_back(num);
          }

        sort(a.begin(), a.end());

    cout << "Sorted array: ";
    for (int num : a) {
        cout << num << " ";
    } 
        
        
        

	}


	return 0;
}