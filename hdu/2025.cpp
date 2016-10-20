#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string str;
    while(cin >> str) {
        char max_ch = str[0];
        for(auto item : str)
            max_ch = max(max_ch, item);
        for(auto item : str)
            if(item == max_ch)
                cout << item << "(max)";
            else
                cout << item;
        cout << endl;
    }
    return 0;
}
