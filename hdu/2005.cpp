#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[12];

void init() {
    memset(arr, 0, sizeof(arr));
    arr[0] = arr[2] = arr[4] = arr[6] = arr[7] = arr[9] = arr[11] = 31;
    arr[3] = arr[5] = arr[8] = arr[10] = 30;
    arr[1] = 28;
}

bool judge_leap(int year) {
    return (year%4 == 0 && year%100 != 0 || year%400 == 0) ? true : false;
}

void solve(const string &str) {
    auto index1 = str.find_first_of("/");
    auto index2 = str.find_last_of("/");
    int year = atoi(string(str.cbegin(), str.cbegin()+index1).c_str());
    int month = atoi(string(str.cbegin()+index1+1, str.cbegin()+index2).c_str());
    int day = atoi(string(str.cbegin()+index2+1, str.cend()).c_str());
    arr[1] = judge_leap(year) ? 29 : 28;
    int cnt = 0;
    for(int i = 0; i < month-1; ++i) {
        cnt += arr[i];
    }
    cnt += day;
    cout << cnt << endl;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    string str;
    init();
    while(cin >> str) {
        solve(str);
    }
    return 0;
}
