#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ar[10005];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = n - 1; i >= 0; i--)
        cout << ar[i] << " ";
    cout << endl;
    return 0;
}
