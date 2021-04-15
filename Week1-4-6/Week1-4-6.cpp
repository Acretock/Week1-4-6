#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> res;
    cin >> n;
    while(n != 0)
    {
       
        if (n % 2 == 0)
        {
            res.push_back(0);
            n /= 2;
        }
        else
        {
            res.push_back(1);
            n /= 2;
        }
    }
    reverse(begin(res),end(res));
    for (auto it = res.begin(); it != res.end(); ++it)
        cout << *it;
}
