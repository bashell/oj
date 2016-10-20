#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 111;
int arr[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        sort(arr, arr+n);
        arr[0] = arr[n-1] = 0;
        double res = 0.0;
        for(int i = 1; i < n-1; ++i)
            res += arr[i];
        printf("%.2f\n", res/(n-2));
    }
    return 0;
}
