#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
        
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
        
    }
    for (int i = x; i >=0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for (int i = x; i >=0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
        
    }


    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < x-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j< 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    cout<<endl;
    for (int i = x-1; i >0; i--)
    {
        for (int k = 0; k < x-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j< 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }



    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < x-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j< 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for (int i = x-1; i >0; i--)
    {
        for (int k = 0; k < x-i; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j< 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    /*
    |
    |
    |--*
    |-*** 
    |*****
    
    
    */
   for (int i = 0; i < x; i++)
   {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";

        }
        cout<<endl;
        
         /* code */
   }
   for (int i = x-2; i > 0; i--)
   {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";

        }
        cout<<endl;
        
         /* code */
   }




    cout<<endl;
    int z=0,one=1;
    for (int i = 0; i < x; i++)
   {
        for (int j = 0; j < i; j++)
        {
            if(z==0){
                cout<<1;
                z=1;
            }
            else if(z==1){
                cout<<0;
                z=0;
            }
            

        }
        cout<<endl;
        
         /* code */
   }



   /*
                ROW
               12345678
         C  1  1______1 
         O  2  12____21
         L  3  123__321
         U  4  12344321
   
   
   */
    for (int r = 0; r < x; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout<<"c";
        }
        cout<<endl;
        
    }
    
   
    
    
    
	return 0;
}