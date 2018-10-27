#include <cstdio>
using namespace std;

const int maxn = 88;
char arr[maxn];

int solve() {
    int ans = 0, k = 0;
    char *tmp = arr;
    while(*tmp) {
        if(*tmp == 'O') ans += ++k;
        if(*tmp == 'X') k = 0;
        ++tmp;
    }
    return ans;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    getchar();
    while(n--) {
        scanf("%s", arr);
        printf("%d\n", solve());
    }
    return 0;
}
