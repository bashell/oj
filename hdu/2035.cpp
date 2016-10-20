/*
// 模拟
#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b;
    while(2 == scanf("%d%d", &a, &b) && (a || b)) {
        int res = 1;
        for(int i = 0; i < b; ++i)
            res = res*a%1000;
        printf("%d\n", res);
    }
    return 0;
}
*/

// 快速幂
#include <cstdio>
using namespace std;

int pow_mod(int a, int b) {
    if(b == 0) return 1;
    int res = pow_mod(a, b/2);
    res = res*res%1000;
    if(b & 1) res = res*a%1000;
    return res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b;
    while(2 == scanf("%d%d", &a, &b) && (a || b)) {
        printf("%d\n", pow_mod(a,b));
    }
    return 0;
}
