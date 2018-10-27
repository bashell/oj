#include <cstdio>
#include <unordered_map>
using namespace std;

const int maxn = 88;
char arr[maxn];
unordered_map<char, int> cmap;

void init() {
    cmap.clear();
    char ch;
    bool found = false;
    int num = 0;
    for(char *tmp = arr; *tmp; ++tmp) {
        if(isalpha(*tmp)) {  // character
            if(found) {  // 发现新character, 结算前一个character
                if(num == 0) cmap[ch] += 1;
                else cmap[ch] += num;
                num = 0;
                found = false;
            }
            ch = *tmp;
            found = true;
        } else {  // digit
            num = num*10 + (*tmp - '0');
        }
    }
    if(found) {  // 处理最后一个character
        if(num == 0) cmap[ch] += 1;
        else cmap[ch] += num;
    }
}

double solve() {
    return cmap['C']*12.01 + cmap['H']*1.008 + cmap['O']*16.00 + cmap['N']*14.01;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    getchar();
    while(T--) {
        scanf("%s", arr);
        init();
        printf("%.3f\n", solve());
    }
    return 0;
}
