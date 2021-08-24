#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<string> names;
    int N;
    cin >> N;
    for (int a0 = 0; a0 < N; a0++)
    {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (emailID.find("@gmail.com") != std::string::npos)
        {
            names.push_front(firstName);
        }
    }
    names.sort();
    for (auto &name : names)
    {
        cout << name << endl;
    }
    return 0;
}
