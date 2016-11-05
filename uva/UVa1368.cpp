#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int m, n;
struct node {
    char ch;
    int num;
} s[4];

bool cmp(node a, node b) {
    return a.num > b.num;
}

void init() {
    s[0].ch = 'A';
    s[1].ch = 'C';
    s[2].ch = 'G';
    s[3].ch = 'T';
    s[0].num = s[1].num = s[2].num = s[3].num = 0;
}

void solve(const vector<string> &svec) {
    string res("");
    int consensus = 0;
    for(int j = 0; j < n; ++j) {
        init();
        for(int i = 0; i < m; ++i) {
            if(svec[i][j] == 'A') ++s[0].num;
            if(svec[i][j] == 'C') ++s[1].num;
            if(svec[i][j] == 'G') ++s[2].num;
            if(svec[i][j] == 'T') ++s[3].num;
        }
        sort(s, s+4, cmp);
        res += s[0].ch;
        consensus += s[1].num + s[2].num + s[3].num;
    }
    cout << res << endl << consensus << endl;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    string str;
    cin >> T;
    while(T--) {
        cin >> m >> n;
        vector<string> svec;
        for(int i = 0; i < m; ++i) {
            cin >> str;
            svec.push_back(str);
        }
        solve(svec);
    }
    return 0;
}

