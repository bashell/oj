#include <cstdio>
#include <algorithm>
using namespace std;

int a[11];

int main()
{
    //freopen("in.txt", "r", stdin);
    int c, n;
    scanf("%d", &c);
    while(c--) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        sort(a, a+n);
        printf("%d\n", a[1]);
    }
    return 0;
}
