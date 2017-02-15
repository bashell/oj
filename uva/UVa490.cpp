#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    //freopen("in.txt", "r", stdin);
    vector<string> input;
    string str;
    int max_len = 0;
    while(getline(cin, str)) {
        input.push_back(str);
        max_len = max(max_len, str.size());
    }
    for(int i = 0; i < max_len; ++i) {
        for(int j = input.size()-1; j >= 0; --j) {
            cout << (i <= input[j].size()-1 ? input[j][i] : ' ');
        }
        cout << endl;
    }

    return 0;
}

