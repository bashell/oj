#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 111;
int arr[maxn];

bool cmp(int a, int b) {
    return abs(a) > abs(b);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        sort(arr, arr+n, cmp);
        printf("%d", arr[0]);
        for(int i = 1; i < n; ++i)
            printf(" %d", arr[i]);
        printf("\n");
    }
    return 0;
}
