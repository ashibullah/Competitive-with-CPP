#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

   /*
                ROW
               12345678     123456
         C  1  1______1     1____1  r=1 c= 6-2r = 4
         O  2  12____21     12__21  r-2 c= 6-2r= 2
         L  3  123__321     123321  r=3 c= 6-6=0
         U  4  12344321
   
   
   */
    for (int r = 1; r <= x; r++)
    {
        
        for (int c = 0; c <=r; c++)
        {
            cout<<"c";
        }
        int clock=1,renew=0,re=r;
        while (clock)
        {
            cout<<"_";
            renew = 2*x - 2*re;
            re++;
            if(renew==0) clock=0;

        }
        
        cout<<endl;
        
    }
    /*

        *______* 1
        **____** 2
        ***__*** 3
        ******** 4
        ROW = 4
        COL = 8
        C 1 T0 R
        SP = R-1 
        SP = R-1
        C 1 TO R
    
    */
    for (int r = 1; r <= x; r++)
    {
        for(int col=1;col<=r;col++){
            cout<<"*";
        }
        for(int sp=1;sp<=(2*x-2*r);sp++){
            cout<<"_";
        }
        
        
        for(int col=1;col<=r;col++){
            cout<<"*";
        }


        cout<<endl;
    }
    
    for (int r = 1; r <= x; r++)
    {
        for(int col=1;col<=r;col++){
            cout<<"*";
        }
        for(int sp=x-1;sp>=r;sp--){
            cout<<"_";
        }
        
        for(int sp=x-1;sp>=r;sp--){
            cout<<"_";
        }
        for(int col=1;col<=r;col++){
            cout<<"*";
        }


        cout<<endl;
    }
    /*
        *
        **
        ***
        ****
        r=4
        c=4
    */
   int num=1;
   for (int r = 0; r < x; r++)
   {
        for (int c = 0; c <=r; c++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
        
   }
   char a= 'A';
   for (int r = 0; r < x; r++)
   {
        for (int c = 0; c <=r; c++)
        {
            cout<<a;
            a++;
            
        }
        a='A';
        cout<<endl;
        
   }
   for (int r = 0; r < x; r++)
   {
        for (int c = 0; c <=r; c++)
        {
            cout<<a;
            
            
        }
        a++;
        cout<<endl;
        
   }
   /*
        1 ___C
        2 __CCC
        3 _CCCCC
        4 CCCCCCC
        x=4
        r=1,2,3,4
        sp= x-r
        c= 2r-1
   
   */
  a='A';
   for (int  r =1; r <= x; r++)
   {
        for (int sp = 0; sp < x-r ; sp++)
        {
            cout<<" ";
        }
        for (int  c = 0; c < 2*r-1; c++)
        {
            cout<<a;
        }
        a++;       
        
        cout<<endl;
   }

  a='A';
   for (int  r =1; r <= x; r++)
   {
        for (int sp = 0; sp < x-r ; sp++)
        {
            cout<<" ";
        }
        for (int  c = 0; c < 2*r-1; c++)
        {
            cout<<a;
            a++;
        }
        a='A';
               
        
        cout<<endl;
   }
   /*
       **** ****     1
       ***   ***     2
       **     **     3
       *       *     4
       **     **     5
       ***   ***     6  
       **** ****     7
       x=4;
       r=1,2,3,4,5,6,7 r1 to <2x
       c 1 to x
       
       sp = x-r+1
       sp = x-r+1

       c 1 to x

   */
    for (int  r =1; r < x; r++){
        for (int c = 1; c <=x-r; c++)
        {
            cout<<"*";
        }
        for (int sp = 1; sp<= r-1; sp++)
        {
            cout<<"_";
        }
        
        for (int sp = 1; sp<= r-1; sp++)
        {
            cout<<"_";
        }
        for (int c = 1; c <=x-r; c++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
    for (int  r =x; r >=1; r--){
        for (int c = x-r; c >=1; c--)
        {
            cout<<"*";
        }
        for (int sp = r-1; sp>= 1; sp--)
        {
            cout<<"_";
        }
        
        for (int sp = r-1; sp>= 1; sp--)
        {
            cout<<"_";
        }
        for (int c = x-r; c >=1; c--)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }



    /*
            

            *__________* 1
            **________** 2
            ***______*** 3
            ****____**** 4
            *****__***** 5
            ************ 6
            *****  ***** 7
            ****    **** 8
            ***      *** 9
            **        ** 10
            *          * 11   
            x=6; 
            r=1,2,3,4,5,6,7,8,9,10,11
            c 0 to r
            sp = x-r
            sp = x-r
            c 0 to 3 
    */
            for(int r=1;r<=x;r++){
                for(int c =1;c<=r;c++) cout<<"*";
                for(int sp=1;sp<=2*(x-r);sp++) cout<<"_";
                for(int c =1;c<=r;c++) cout<<"*";
                cout<<endl;
            }
            for(int r=x-1;r>=1;r--){
                for(int c =1;c<=r;c++) cout<<"*";
                for(int sp=1;sp<=2*(x-r);sp++) cout<<"_";
                for(int c =1;c<=r;c++) cout<<"*";
                cout<<endl;
            }
    
    /*
        ****** 1
        *1234* 2
        *1234* 3
        *    * 4
        *    * 5
        ****** 6
        x=6; 
        ******* 1 sp=;
        *12345* 2
        *12345* 3
        *     * 4 sp= x-2; 
        *     * 5
        *     * 6
        ******* 7
        x=6; 

        r=1,2,3,4,5,6
        c= 6
        c =1
        sp=x-2;  
    */
    for(int r=1;r<=x;r++){
        if(r==1 || r==x){
            for (int c = 1; c <x; c++)
            {
                cout<<"*";
            }
            
        }
        else{
            cout<<"*";
        for(int sp = 1; sp<x-2;sp++)cout<<"_";
        cout<<"*";

        }
        
        cout<<endl;
    }


    /*
        6 6 6 6 6 6 6 6 6 6 6 
        6 5 5 5 5 5 5 5 5 5 6 
        6 5 4 4 4 4 4 4 4 5 6 
        6 5 4 3 3 3 3 3 4 5 6 
        6 5 4 3 2 2 2 3 4 5 6 
        6 5 4 3 2 1 2 3 4 5 6 
        6 5 4 3 2 2 2 3 4 5 6 
        6 5 4 3 3 3 3 3 4 5 6 
        6 5 4 4 4 4 4 4 4 5 6 
        6 5 5 5 5 5 5 5 5 5 6 
        6 6 6 6 6 6 6 6 6 6 6

         1 2 3 4 5 
      1  3 3 3 3 3   1  x=3 
      2  3 2 2 2 3   2  r=2x-1
      3  3 2 1 2 3   3   
      4  3 2 2 2 3   4
      5  3 3 3 3 3   5
        c = 
    */

   for(int i=1;i<2*x-1;i++){
    for (int j = 1; j <2*x-1; j++)
    {
        int top = i;
        int right = j;
        int bot= (2*x-1)-i;
        int left= (2*x-1)-j;
        cout<<(x-min(min(top,bot),min(right,left)));
    }
    cout<<endl;
    
   }
	return 0;
}