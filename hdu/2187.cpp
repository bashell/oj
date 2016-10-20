#include <cstdio>
#include <algorithm>
using namespace std;

struct node {
    int p;
    int h;
} s[1001];

bool cmp(node a, node b) {
    return a.p < b.p;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int c, n, m;
    scanf("%d", &c);
    while(c--) {
        scanf("%d %d", &n, &m);
        for(int i = 0; i < m; ++i)
            scanf("%d %d", &s[i].p, &s[i].h);
        sort(s, s+m, cmp);
        double sum = 0.0;
        for(int i = 0; i < m; ++i) {
            if(n >= s[i].p * s[i].h) {
                sum += 1.0 * s[i].h;
                n -= s[i].p * s[i].h;
            } else {
                sum += (1.0 * n) / s[i].p;
                break;
            }
        }
        printf("%.2f\n", sum);
    }
    return 0;
}
