#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 55;
char str[maxn];

bool judge() {
    int len = strlen(str);
    if(len == 0) return false;
    if(!(isalpha(str[0]) || str[0] == '_')) return false;
    for(int i = 1; i < len; ++i) {
        if(!(isdigit(str[i]) || isalpha(str[i]) || str[i] == '_'))
            return false;
    }
    return true;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        getchar();
        while(n--) {
            gets(str);
            printf(judge() ? "yes\n" : "no\n");
        }
    }
    return 0;
}
