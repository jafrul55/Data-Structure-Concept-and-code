#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Unorder_Map :" << endl;
    // Unsorted Map:
    unordered_map<int, int> M;
    M[3] = 9;
    M[2] = 3;
    M.insert(make_pair(1, 4));

    cout << "Key"
         << " | "
         << "Value" << endl;

    for (auto i : M)
    {
        cout << i.first << " | " << i.second << endl;
    }
    return 0;
}