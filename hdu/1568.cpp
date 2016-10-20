#include <cstdio>
#include <cmath>
using namespace std;

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    int f0 = 0, f1 = 1;
    for(int i = 2; i <= n; ++i) {
        int f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    return f1;
}

void cal(int n) {
    double t = (1 + sqrt(5))/2;
    double v = -0.5*log10(5.0) + n*log10(t);
    v -= floor(v);
    v = pow(10, v);
    int res = v*1000;
    printf("%d\n", res);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        if(n <= 20)
            printf("%d\n", fib(n));
        else
            cal(n);
    }
    return 0;
}
