#include<iostream>
using namespace std;
int mbox[]={6,2,5,5,4,5,6,3,7,6};
int mval[]={1,7,4,5,9,8};
int maxm[]={2,3,4,5,6,7};
int hold[1000],sum=0,count=0,arr[1000],index[1000];
int x,T;



void solution (int a){
    
    for(int i = sizeof(a)-1; i>=0 ;i--){
        hold[i]= a%10;
        a = a/10;
    }
    for(int i = 0; i<sizeof(a)-1;i++){
        sum+= mbox[hold[i]];
    }
 
    int j=0;
    if (sum%2!=0)
    {
        count++;
        sum-=3;
        arr[j]= 3;
        j++;
    }
    while (sum%2==0 &sum !=0)
    {
        
        arr[j]= 2;
        j++;
        sum-=2;
        count++;
    }
    
    for (int i = 0; i < count ; i++)
    {
        if (arr[i]==2)
        {
            arr[i]=1;
        }
        else if (arr[i]==3)
        {
            arr[i]=7;
        }
        //int mval[]={1,7,4,5,9,8};
        //int maxm[]={2,3,4,5,6,7};
        else if (arr[i]==4)
        {
            arr[i]=4;
        }
        else if (arr[i]==5)
        {
            arr[i]=5;
        }
        else if (arr[i]==6)
        {
            arr[i]=9;
        }
        else if (arr[i]==7)
        {
            arr[i]=8;
        }
        
    }   
    for (int i = 0; i < count; i++)
    {
        cout <<arr[i];
    }
    
      
    
    
}
int main()
{
    cin>> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x;
        solution(x);

    }
    
    
    return 0;
}
