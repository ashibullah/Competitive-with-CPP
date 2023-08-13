#include<iostream>

using namespace std;
int x,count=0,c=0,Temp=1;
void solution(char arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]=='.')
        {
            arr[i]='B';
            count++;
        }
           
    }

    for (int i = 0; i < n; i++)
    {   
        if (arr[i]=='H' && arr[i+1]=='H')
        {   
            Temp =0;
        }
           
    }
    if (Temp==0)
    {
        cout<<"NO\n";
        
    }
    else {
        cout<<"YES\n";
        cout<<arr;
    }

    
    

}

int main()
{
    cin>>x;
    char a[x];
    cin>>a;
    solution(a,x);

    return 0;
}
