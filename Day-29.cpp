#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void maxAnd(int n, int k)
{
    int temp = 1;
    vector<int> andValues;

    while (temp < n)
    {

        for (int i = 0; i < n + 1; ++i)
        {
            if (temp < i)
            {

                if ((temp & i) < k)
                {
                    andValues.push_back((temp & i));
                }
            }
        }

        temp++;
    }

    double max = *max_element(andValues.begin(), andValues.end());
    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++)
    {
        int n;
        int k;
        cin >> n >> k;
        maxAnd(n, k);
    }

    return 0;
}
