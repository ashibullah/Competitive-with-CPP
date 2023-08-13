#include <iostream>
using namespace std;
int knapsack(int W, int wt[], int val[], int n)
{
    int K[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
                cout << K[i][w] << " ";
            }
            else if (wt[i - 1] <= w)
            {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
                cout << K[i][w] << " ";
            }
            else
            {
                K[i][w] = K[i - 1][w];
                cout << K[i][w] << " ";
            }
        }
        for (int i = 0; i <= n; i++)
        {
            for (int w = 0; w <= W; w++)
            {
                cout << K[i][w] << " ";
            }
            cout << endl;
        }
    }
    return K[n][W];
}
int main()
{
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    int val[n], wt[n];
    cout << "Enter the weight and value of each item:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    cout << "Enter the maximum weight capacity: ";
    cin >> W;
    cout << "Maximum value that can be obtained is " << knapsack(W, wt, val, n) << endl;
    return 0;
}
