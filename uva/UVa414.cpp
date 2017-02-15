#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define min(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    string str;
    while(cin >> n && n) {
        getchar();
        vector<int> spaces(n, 0);
        int space_min = 25;
        for(int i = 0; i < n; ++i) {
            getline(cin, str);
            for(int j = 0; j < str.size(); ++j) {
                if(str[j] == ' ')
                    ++spaces[i];
            }
            space_min = min(space_min, spaces[i]);
        }
        int res = 0;
        for(auto &s : spaces)
            s -= space_min, res += s;
        cout << res << endl;
    }
    return 0;
}

