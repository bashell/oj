#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        string str;
        int digit_num;
        for(int i = 0; i < n; ++i) {
            cin >> str;
            digit_num = 0;
            for(auto item : str)
                if(isdigit(item))
                    ++digit_num;
            printf("%d\n", digit_num);
        }
    }
    return 0;
}
