#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b, n;
    while(scanf("%d%d%d", &a, &b, &n) && a) {
        int f1 = 1, f2 = 1;
        if(n == 1 || n == 2)
            printf("%d\n", 1);
        else {
            // (f1, f2)的组合方式最多有7 * 7 = 49种, 于是周期为49
            for(int i = 3; i <= n%49; ++i) {
                int tmp = (a*f2 + b*f1) % 7;
                f1 = f2;
                f2 = tmp;
            }
            printf("%d\n", f2);
        }
    }
    return 0;
}

