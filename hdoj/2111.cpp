#include <cstdio>
#include <algorithm>
using namespace std;

struct node {
    int pi;
    int mi;
} s[101];

bool cmp(node a, node b) {
    return a.pi > b.pi;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int v, n;
    while(scanf("%d %d", &v, &n) && v) {
        for(int i = 0; i < n; ++i)
            scanf("%d %d", &s[i].pi, &s[i].mi);
        sort(s, s+n, cmp);
        int total = 0;
        for(int i = 0; i < n; ++i) {
            if(v >= s[i].mi) {
                total += s[i].pi * s[i].mi;
                v -= s[i].mi;
            } else {
                total += s[i].pi * v;
                break;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
