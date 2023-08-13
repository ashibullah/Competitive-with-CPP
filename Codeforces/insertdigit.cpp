#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long int d, n;
        string num, ans;
        cin >> d >> n >> num;
        ans = num;

        for (int i = 0; i <= num.length(); i++)
        {
            string new_num = num.substr(0, i) + to_string(n) + num.substr(i);
            if (new_num > ans)
            {
                ans = new_num;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
