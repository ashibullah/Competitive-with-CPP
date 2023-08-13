#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        /* code */
    }
    int min,max,minc=0,maxc=0;
    min=max=arr[0];
    for(int i =1 ; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
            maxc++;
        }
        else if(arr[i]<min){
            min = arr[i];
            minc++;
        }

    }
    cout<<maxc<<" "<<minc<<endl;
    
    
	return 0;
}