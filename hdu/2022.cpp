#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return abs(a) < abs(b);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(cin >> m >> n) {
        int num;
        vector<int> arr;
        for(int i = 0; i < m*n; ++i) {
            cin >> num;
            arr.push_back(num);
        }
        int max_val = *max_element(arr.begin(), arr.end(), cmp);
        int index;
        for(int i = 0; i < m*n; ++i) {
            if(arr[i] == max_val) {
                index = i;
                break;
            }
        }
        cout << index/n+1 << " " << index%n+1 << " " << max_val << endl;
    }
    return 0;
}
