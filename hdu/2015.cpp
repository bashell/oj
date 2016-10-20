#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 111;
int arr[maxn];
int n, m;

void init(int n) {
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < n; ++i)
        arr[i] = 2+2*i;
}

void solve(int n, int m) {
    if(m >= n) {
        printf("%d\n", accumulate(arr, arr+n, 0)/n);
    } else {
        printf("%d", accumulate(arr, arr+m, 0)/m);
        for(int i = m; i < n; ) {
            if(i+m <= n)
                printf(" %d", accumulate(arr+i, arr+i+m, 0)/m);
            else
                printf(" %d", accumulate(arr+i, arr+n, 0)/(n-i));
            i += m;
        }
        printf("\n");
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    while(2 == scanf("%d%d", &n, &m)) {
        init(n);
        solve(n, m);
    }
    return 0;
}
