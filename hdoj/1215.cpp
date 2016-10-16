#include <cstdio>
using namespace std;

const int maxn = 500010;
int a[maxn] = {0};

// 打表
void buildTable() {
    for(int i = 1; i < maxn/2; ++i) {
        // j为i的倍数时，j的因子和加i
        for(int j = 2*i; j <= maxn; j += i)
            a[j] += i;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, n;
    buildTable();
    while(~scanf("%d", &T)) {
        while(T--) {
            scanf("%d", &n);
            printf("%d\n", a[n]);
        }
    }
    return 0;
}
