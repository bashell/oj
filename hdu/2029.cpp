#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

bool judge(const string &str) {
    int i = 0, j = str.size()-1;
    while(i <= j) {
        if(str[i++] != str[j--])
            return false;
    }
    return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(cin >> n) {
        string str;
        while(n--) {
            cin >> str;
            cout << (judge(str) ? "yes" : "no") << endl;
        }
    }
    return 0;
}
