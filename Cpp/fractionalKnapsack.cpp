#include<iostream>
#include<algorithm>
using namespace std;

struct Item{
    int value, weight;
    double ratio;
};

bool compare(Item a, Item b){
    return a.ratio>b.ratio;
}
double fractional_knapsack(Item items[], int n, int w){
    sort(items, items+n, compare);

    int current_weight=0;
    double max_value=0.0;

    for(int i=0;i<n;i++){
        if(current_weight+items[i].weight<=w){
            current_weight+=items[i].weight;
            max_value+=items[i].value;
        }
        else{
            int remaining=w-current_weight;
            max_value+=items[i].ratio*remaining;
            break;
        }
    }
    return max_value;
}

int main(){
    int n, w;
    cout<<"Enter number of items: ";
    cin>>n;
    Item items[n];
    cout<<"Enter value and weight of each item:\n";
    for(int i=0;i<n;i++){
        cin>>items[i].value>>items[i].weight;
        items[i].ratio=(double)items[i].value/items[i].weight;
    }
    cout<<"Enter maximum weight that can be carried: ";
    cin>>w;
    double max_value=fractional_knapsack(items, n, w);
    cout<<"Maximum value in Knapsack = "<<max_value<<"\n";
    return 0;
}
