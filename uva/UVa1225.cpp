#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 10;
int arr[maxn];

void solve(int n) {
    while(n > 0) {
        ++arr[n%10];
        n /= 10;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, n;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        memset(arr, 0, sizeof(arr));
        for(int i = 1; i <= n; ++i)
            solve(i);
        printf("%d", arr[0]);
        for(int i = 1; i < 10; ++i)
            printf(" %d", arr[i]);
        printf("\n");
    }
    return 0;
}

