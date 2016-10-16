#include <cstdio>
#include <algorithm>
using namespace std;

int a[11111];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        sort(a, a+n);
        bool flag = true;
        for(int i = 0, j = n-1; i <= j; ) {
            if(i == j) {
                printf("%d\n", a[i]);
                break;
            } else if(flag) {
                printf("%d ", a[j--]);
                flag = false;
            } else {
                printf("%d ", a[i++]);
                flag = true;
            }
        }
    }
    return 0;
}
