#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    unordered_map<string, string> smap{
        {" ", "%20"},{"!", "%21"},
        {"$", "%24"},{"%", "%25"},
        {"(", "%28"},{")", "%29"},
        {"*", "%2a"}
    };
    string s;
    while(getline(cin, s) && s != "#") {
        string res("");
        for(int i = 0; i < s.size(); ++i) {
            if(smap.find(string(1, s[i])) == smap.end())
                res += s[i];
            else
                res += smap[string(1, s[i])];
        }
        cout << res << endl;
    }
    return 0;
}
