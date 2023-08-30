#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef cpp
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        int n, bcount = 0, ccount = 0;
        cout << "Enter size\n";
        cin >> n;

        int arr[n], max = 0, min = 99999;
        vector<int> left;
        vector<int> right;
        map<int, int> hashin;
        cout << "Enter Values\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];

            hashin[arr[i]]++;
        }
        sort(arr, arr + n);

        for (size_t i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        for (auto it : hashin)
        {
            cout << it.first << "->" << it.second << endl;
        }

        for (int i = 0; i < n; i++)
        {
            bool is_divisible = false; // A flag to track if the number is divisible by any other number in the array
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[i] % arr[j] == 0)
                { // Check if arr[i] is divisible by arr[j]
                    is_divisible = true;
                    break; // Break the inner loop as soon as a divisor is found
                }
            }

            if (is_divisible)
            {
                left.push_back(arr[i]); // Add to the left vector if a divisor was found
            }
            else
            {
                right.push_back(arr[i]); // Add to the right vector if no divisor was found
            }
        }
        
        cout << "LEFT";
        for (int i = 0; i < left.size(); i++)
        {
            cout << left[i] << " ";
        }
        cout << endl
             << "Right" << endl;
        for (int i = 0; i < right.size(); i++)
        {
            cout << right[i] << " ";
        }
        cout << endl;
    }
}

/*

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

for (size_t i = 0; i < n; i++)
{
    for (size_t j = i+1; j < n; j++)
    {
        if (arr[i]%arr[j]==0)
        {
            bcount++;
        }
        else ccount++;

    }

}
cout<<"Size of B "<<bcount<<"\nSize of C "<<ccount<<endl;
int b[bcount],c[ccount],bclc=0,cclc=0;

for (size_t i = 0; i < n; i++)
{
    for (size_t j = i+1; j < n; j++)
    {
        if (arr[i]%arr[j]==0)
        {
            b[bclc]=arr[i];
            bclc++;
        }
        else {
            c[cclc]=arr[i];
            cclc++;
        }

    }

}
for (size_t i = 0; i < bclc; i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;
for (size_t i = 0; i < cclc; i++)
{
    cout<<c[i]<<" ";
}
cout<<endl;




#include<bits/stdc++.h>
using namespace std;
int T,n,i,j,k,m;
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		for(i=1;i<=n;++i)cin>>a[i];
		sort(a+1,a+n+1);
		if(a[1]==a[n]){cout<<"-1\n";continue;}
		else{
			int pos;
			for(i=1;i<=n;++i)if(a[i]!=a[n])pos=i;
			cout<<pos<<" "<<n-pos<<"\n";
			for(i=1;i<=pos;++i)cout<<a[i]<<" ";cout<<"\n";
			for(;i<=n;++i)cout<<a[i]<<" ";cout<<"\n";
		}
	}
		return 0;
	}

*/
