#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    int r,c;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(a[i][j]==1){
                r=i;
                c=j;
                break;
            }
        }
    }
    int moves = abs(r-2)+ abs(c-2);
    cout<<moves;

    
}
