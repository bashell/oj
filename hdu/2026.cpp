#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string s;
    while(getline(cin, s)) {
        bool flag = true;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == ' ') {
                flag = true;
                continue;
            }
            if(flag)
                s[i] -= 32, flag = false;
        }
        cout << s << endl;
    }
    return 0;
}
