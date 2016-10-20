#include <cstdio>
#include <algorithm>
using namespace std;

struct node {
    int j;
    int f;
};

bool cmp(node a, node b) {
    return 1.0*a.j/a.f > 1.0*b.j/b.f;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(scanf("%d %d", &m, &n) && m != -1) {
        struct node s[n];
        for(int i = 0; i < n; ++i)
            scanf("%d %d", &s[i].j, &s[i].f);
        sort(s, s+n, cmp);
        double result = 0.0;
        for(int i = 0; i < n; ++i) {
            if(m >= s[i].f) {
                result += 1.0 * s[i].j;
                m -= s[i].f;
            } else {
                result += s[i].j * (1.0*m/s[i].f);
                break;
            }
        }
        printf("%.3f\n", result);
    }
    return 0;
}
