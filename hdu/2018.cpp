#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 56;
int arr[maxn];

/**
 * 第4年生小牛：
 *  f(n) = f(n-1) + f(n-3),
 *  f(0) = 1, f(1) = 2, f(2) = 3
 */
void init() {
    memset(arr, 0, sizeof(arr));
    arr[0] = 1, arr[1] = 2, arr[2] = 3;
    for(int i = 3; i < 55; ++i)
        arr[i] = arr[i-1] + arr[i-3];
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    init();
    while(~scanf("%d", &n) && n) {
        printf("%d\n", arr[n-1]);
    }
    return 0;
}
