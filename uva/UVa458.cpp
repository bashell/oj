#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string input;
    while(cin >> input) {
        for(const auto &ch : input)
            cout << char(ch-7);
        cout << endl;
    }
    return 0;
}

