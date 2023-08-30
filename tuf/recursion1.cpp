#include <bits/stdc++.h>
using namespace std;
 void pname(int n){
    cout<<"Hello\n";
    n--;
    if(n!=0) pname(n);

 }
 void pnum(int n){
    int clc=1;
    cout<<clc<<" ";
    n--;
    clc++;
    if(n!=0) pnum(n);

 }

int main() {
   int n1;
   cin>>n1;
//    pname(n1);
    pnum(n1);
   cout<<"END";
   

    return 0;
}
