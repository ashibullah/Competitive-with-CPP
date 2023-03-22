#include<bits/stdc++.h>
#define MAX 10000

using namespace std;
vector <int> graph [MAX];
vector <bool> visits;
int n,e,n1,n2,start;

void dfs(int s){
    visits[s] = true;
    cout<<s<<" ";

    for (int i : graph[s])
    {
        if(visits[i]== false){
            dfs(i);

        }
    }


}

int main()
{

    cout<<"Number of node and edge: ";
    cin>>n;
    cout<<"Enter edge: ";
    cin>>e;
    for (int i = 0; i < e; i++)
    {
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    visits.assign(n+1,false);
    cout<<"Define start node";
    cin>>start;
    dfs(start);
    return 0;
}
