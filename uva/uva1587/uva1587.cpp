#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 6;
struct node {
    int x;
    int y;
} s[maxn];

bool cmp(const node &a, const node &b) {
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b;
    while(2 == scanf("%d%d", &a, &b)) {
        s[0].x = min(a, b);
        s[0].y = max(a, b);
        for(int i = 1; i < 6; ++i) {
            scanf("%d%d", &a, &b);
            s[i].x = min(a, b);
            s[i].y = max(a, b);
        }
        sort(s, s+6, cmp);
        bool flag = true;
        for(int i = 0; i < 6; i+=2) {
            if(s[i].x != s[i+1].x || s[i].y != s[i+1].y)
                flag = false;
        }
        if(!(s[0].x == s[2].x && s[0].y == s[4].x && s[2].y == s[4].y))
            flag = false;
        printf(flag ? "POSSIBLE\n" : "IMPOSSIBLE\n");
    }
    return 0;
}
