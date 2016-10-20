#include <cstdio>
#include <cstring>
#include <iostream>
#include <unordered_set>
using namespace std;

int flag[4];
bool judge(int *flag) {
    if(flag[0]+flag[1]+flag[2]+flag[3] >= 3)
        return true;
    return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, cnt, sz;
    cin >> n;
    string s;
    unordered_set<string> sset{"~", "!", "@", "#", "$", "%", "^"};
    while(n--) {
        cin >> s;
        cnt = 0, sz = s.size();
        memset(flag, 0, sizeof(flag));
        if(sz < 8 || sz > 16) {
            cout << "NO" << endl; continue;
        }
        for(int i = 0; i < sz; ++i) {
            if(isdigit(s[i])) flag[0] = 1;
            if(islower(s[i])) flag[1] = 1;
            if(isupper(s[i])) flag[2] = 1;
            if(sset.find(string(1, s[i])) != sset.end()) flag[3] = 1;
        }
        if(judge(flag))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
