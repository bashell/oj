#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string input;
    while(cin >> input) {
        sort(input.begin(), input.end());
        cout << input[0] << " " << input[1] << " " << input[2] << endl;
    }
    return 0;
}
