#include <cstdio>
#include <cmath>
using namespace std;

/*
 * log(n!) = log(n) + log(n-1) + ... + log(2) + log(1) = x (x形如18.386125)
 * n! = 10^18 * 10^0.386125 (共计19位)
 */
double cal_fact(int n) {
    double res = 0.0;
    for(int k = 1; k <= n; ++k) {
        res += log10(k);
    }
    return res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, num;
    while(~scanf("%d", &n)) {
        while(n--) {
            scanf("%d", &num);
            printf("%d\n", (int)cal_fact(num)+1);
        }
    }
    return 0;
}
