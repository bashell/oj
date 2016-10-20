#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) && n) {
        unordered_map<string, int> color;
        string col;
        for(int i = 0; i < n; ++i) {
            cin >> col;
            ++color[col];
        }
        int max_n = 0;
        string res;
        for(const auto iter : color) {
            if(iter.second > max_n) {
                max_n = iter.second;
                res = iter.first;
            }
        }
        cout << res << endl;
    }
    return 0;
}

