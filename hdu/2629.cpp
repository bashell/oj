#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, string> smap{{"33", "Zhejiang"}, {"11", "Beijing"}, {"71", "Taiwan"},
                                   {"81", "Hong Kong"}, {"82", "Macao"}, {"54", "Tibet"},
                                   {"21", "Liaoning"}, {"31", "Shanghai"}};

void solve(const string &str) {
    string s(str.begin(), str.begin()+2);
    string year(str.begin()+6, str.begin()+10);
    string month(str.begin()+10, str.begin()+12);
    string day(str.begin()+12, str.begin()+14);
    string province = smap[s];
    cout << "He/She is from " << province << ",and his/her birthday is on "
         << month << "," << day << "," << year << " based on the table." << endl;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    while(n--) {
        string str;
        cin >> str;
        solve(str);
    }
    return 0;
}
